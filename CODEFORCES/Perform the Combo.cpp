#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char s[n+1];
		int t[m];
		cin>>s;
		for(int i=0;i<m;i++) cin>>t[i];
		int lp[n+1]={0};
		//sort(t,t+n);
		for(int i=0;i<m;i++){
			lp[0]++;
			lp[t[i]]--;
		}
		for(int i=1;i<n+1;i++) lp[i]+=lp[i-1];
		for(int i=0;i<n+1;i++) lp[i]++;
		int ch[27]={0};
		for(int i=0;i<n;i++){
			ch[s[i]-97]+=lp[i];
		}
		for(int i=0;i<26;i++) cout<<ch[i]<<" ";
		cout<<endl;
	}
}
