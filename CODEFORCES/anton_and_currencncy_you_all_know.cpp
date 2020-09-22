#include<iostream>
#include<vector>
using namespace std;
main(){
	int n;
	cin>>n;
	int k=n,hold=-1;
	vector<int> v;
	while(k) v.push_back(k%10),k/=10;
	for(int i=v.size();i>0;i--){
	   if(v[i]%2==0){
		   hold=i;
		   if(v[0]>v[i]){ int t=v[0];
			   v[0]=v[i];
			   v[i]=t;
			   for(int j=v.size()-1;j>=0;j--) cout<<v[j];
			   return 0;
		   }
	   }
	   if(hold==-1){cout<<"-1"; return 0; }
	   else{ int t=v[0];
		   v[0]=v[i];
		   v[i]=t;
	   for(int j=v.size()-1;j>=0;j--) cout<<v[j];
			   return 0;
}}}

