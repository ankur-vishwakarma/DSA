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
	vector<vector<int> >v;
	for(int i=0;i<t;i++){
		int n,buf; vector<int> tmp; cin>>n;
		for(int j=0;j<n;j++) cin>>buf, tmp.push_back(buf);
		v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
		int pptr=0,nptr=0;
		for(int j=0;j<v[i].size();j+=2){
			if(pptr<j) pptr=j+1;
			if(v[i][j]<0){
			}
		}
		
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
if(j%2=0){
				cout<<v[i][j]<<" "<<v[i][nptr]<<endl;
				if(nptr>j) swap(v[i][j],v[i][nptr]);
				else{
					while(v[i][pptr]<0&&pptr<v[i].size()) pptr++;
				    if(pptr==v[i].size()) break;
				    swap(v[i][j],v[i][pptr]);
				}
			}
			else{
				cout<<v[i][j]<<" "<<v[i][pptr]<<endl;
				if(pptr>j) swap(v[i][j],v[i][pptr]);
				else{
					while(v[i][nptr]>=0&&nptr<v[i].size()) nptr++;
				    if(nptr==v[i].size()) break;
				    swap(v[i][j],v[i][nptr]);
				}
			}
