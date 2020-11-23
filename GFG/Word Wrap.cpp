#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,allowd;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		cin>>allowd;
		int cur=0,l=0,r=0;
		for(int i=0;i<n;i++){
			if((l==r&&cur+s[i]>allowd)||cur+s[i]+1>allowd){  //+1 for space
				cout<<l+1<<" "<<r<<" ";
				l=r,cur=0;
			}
			cur+=s[i];
			
			r++;
		}
		cout<<l+1<<" "<<r<<" ";
		cout<<endl;
	}
}
