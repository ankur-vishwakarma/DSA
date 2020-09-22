#include<bits/stdc++.h>
using namespace std;
pair<int,int> knapsack(int *w,int *v,int n,int val){
	int ans[2][val+1];
	map<int,int> wt;
	for(int i=0;i<=val;i++) ans[0][i]=0;
	ans[1][0]=0;
	int flag=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=val;j++){
			ans[flag][j]=ans[flag^1][j];
			if(j-w[i-1]>=0){
				int l=v[i-1]+ans[1-flag][j-w[i-1]];
			    ans[flag][j]=max(ans[flag][j],l);
			}
			if(!wt[ans[flag][j]]) wt[ans[flag][j]]=j;
		}
		flag=flag^1;
	}
	return {wt[ans[flag^1][val]],ans[flag^1][val]};
}
main(){
	while(true){
	int v;
	cin>>v;
	int n;
	cin>>n;
	if(v==0&&n==0) break;
	int *s=new int[n];
	int * t=new int[n];
	for(int i=0;i<n;i++) cin>>s[i]>>t[i];
	pair<int,int> ans=knapsack(s,t,n,v);
	cout<<ans.first<<" "<<ans.second<<endl;
	}
}
