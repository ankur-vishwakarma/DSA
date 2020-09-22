#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=2;i<=n;i++){
		int flag=0;
		for(int j=2;j*j<=i;j++) if(i%j==0) { flag=1; break; }
		if(flag!=1) count++;
	}
	cout<<count;
}
/*
int * dp=new int[n+1]{0};
	dp[0]=dp[1]=1;
	int count=1;
	for(int i=3;i<=n;i+=2){
		if(!dp[i]){
			//cout<<i<<endl;
			count++;
			for(int j=i*i;j<=n;j+=i) dp[j]=1;
		}
	}
	cout<<count<<endl;
*/
