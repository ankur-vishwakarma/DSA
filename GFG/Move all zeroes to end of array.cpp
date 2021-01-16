#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
main(){
	int t;
	cin>>t;
	vector<vector<int> > v;
	for(int i=0;i<t;i++){
		int n; cin>>n;
		vector<int> tmp; int buf;
		for(int j=0;j<n;j++) cin>>buf,tmp.push_back(buf);
		v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
		int it=0;
		for(int j=0;j<v[i].size();j++){
			if(it<=j) it=j+1;
			if(v[i][j]==0){
				while(v[i][it]==0&&it<v[i].size()) it++;
				if(it==v[i].size()) break;
				swap(v[i][j],v[i][it]);
			}
		}
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
