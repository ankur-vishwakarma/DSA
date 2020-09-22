#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a=0,s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		if(s[0]!=1||n==1){
			cout<<"First\n";
			continue;
		}
		int turn=0;
		for(int i=0;i<n-1;){
			if(i==n-2&&s[i]==1){
				turn=1;
				break;
			}
			if(s[i]==1&&s[i+1]!=1){
				turn=1;
				break;
			}
			if(s[i]!=1) break;
			i+=2;
		}
		if(turn) cout<<"Second\n";
		else cout<<"First\n";
	}
}
