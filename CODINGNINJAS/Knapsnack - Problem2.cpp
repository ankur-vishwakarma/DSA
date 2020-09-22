#include<bits/stdc++.h>
using namespace std;
int knapsack(int *w,int *v,int n,int val){
	int ans[2][val+1];
	for(int i=0;i<=val;i++) ans[0][i]=0;
	ans[1][0]=0;
	int flag=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=val;j++){
			ans[flag][j]=ans[1-flag][j];
			if(j-w[i-1]>=0){
				int l=v[i-1]+ans[1-flag][j-w[i-1]];
			    ans[flag][j]=max(ans[flag][j],l);
			}
		}
		flag=flag^1;
	}
	return ans[flag^1][val];
}
main(){
	int n;
	cin>>n;
	int *s=new int[n];
	int * t=new int[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>t[i];
	int v;
	cin>>v;
	cout<<knapsack(s,t,n,v);
}
/*
12 
15 
16 
16 
10 
21 
18 
12 
17 
18 
3
8
9
6
2
9
4
4
8
9
*/
