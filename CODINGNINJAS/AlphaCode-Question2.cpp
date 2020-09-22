#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

long long alpha(string s,int i,long long *dp){
	if(i==s.length()) return 1;
	if(s[i]=='0'){
		dp[i]=0;
		return 0;
	}
	if(dp[i]!=-1) return dp[i]%m;
	long long count=alpha(s,i+1,dp)%m;
	if((s[i]-'0')*10+(s[i+1]-'0')<=26&&i+1<s.length()){
        long long ians=alpha(s,i+2,dp)%m;
		count=(count%m+ians%m)%m;
	}
	dp[i]=count%m;
	return count%m;
}
main(){
	while(true){
		string s;
		cin>>s;
		if(s=="0") break;
		long long *dp=new long long[s.length()+1];
		for(int i=0;i<=s.length();i++) dp[i]=-1;
		cout<<alpha(s,0,dp)%m<<endl;
	}
}
