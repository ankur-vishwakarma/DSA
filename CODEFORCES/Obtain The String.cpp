#include<bits/stdc++.h>
using namespace std;
int **dp;
main(){
	int T;
	cin>>T;
	while(T--){
		string s,t;
		cin>>s>>t;
		int n=s.length();
		dp=new int *[n+1];
		for(int i=0;i<=n;i++) dp[i]=new int[26];
		for(int i=0;i<n;i++){
			for(int j=0;j<26;j++){
				dp[i][j]=-1;
			}
		}
		//lets fill dp
		//base
		dp[n-1][s[n-1]-97]=n-1;
		for(int i=n-2;i>=0;i--){
			for(int j=0;j<26;j++) dp[i][j]=dp[i+1][j];
			dp[i][s[i]-97]=i;
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<26;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}*/
		//start iterating t
		int flag=0,ops=1,dont_print=0;
		for(int i=0;i<t.length();){
			//cout<<flag<<" "<<t[i]<<endl;
			if(dp[flag][t[i]-97]!=-1){ //found
				flag=dp[flag][t[i]-97]+1;
				if(flag>=n&&i!=t.length()-1) flag=0,ops++;
				i++;
			}
			else{ 
				if(flag==0){  //not found since strt to end only
					cout<<"-1\n";
					dont_print=1;
					break;
				}
				else{  //not found at ith to end so lets check from strt at the cost of one operation
					flag=0;
					ops++;
				}
			}
		}
		if(!dont_print) cout<<ops<<endl;
	}
}
/*
char * s=new char[100000+1];
		char * t=new char[100000+1];
		cin>>s>>t;
		cout<<s.length()<<" "<<t<<endl;
*/
