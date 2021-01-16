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
		int n,buf; vector<int> tmp; cin>>n;
		for(int j=0;j<n;j++) cin>>buf, tmp.push_back(buf);
		v.push_back(tmp); 
	}
	for(int i=0;i<t;i++){
		for(int j=1;j<v[i].size();j+=2){
			if(v[i][j-1]>v[i][j]) swap(v[i][j-1],v[i][j]);
		    if(j+1<v[i].size()&&v[i][j+1]>v[i][j]) swap(v[i][j+1],v[i][j]);
		}
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
