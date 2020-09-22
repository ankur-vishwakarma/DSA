#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		int i=0,j=n-1,flag=0;
		while(i<j){
			if(s[i]+s[j]>x) j--;
			else if(s[i]+s[j]<x) i++;
			else{
				cout<<"Yes\n";
				flag=1;
				break;
			}
		}
		if(flag==0) cout<<"No\n";
	}
}
