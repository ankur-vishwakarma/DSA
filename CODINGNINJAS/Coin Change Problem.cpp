#include<bits/stdc++.h>
using namespace std;
int h(int *s, int n,int v,int left,int * val,int nn,unordered_map <string,bool> & dp){
	for(int i=0;i<nn;i++) cout<<val[i];
	cout<<" "<<left<<endl;
	if(left<0) return 0;
	if(left==0){
		char key[nn];
		for(int i=0;i<nn;i++) key[i]=(char)val[i];
		key[nn]='\0';
		if(dp[key]) return 0;
		dp[key]=true;
		return 1;
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]>left) break;
		if(val[i]==0) nn++;
		val[i]++;
		count+=h(s,n,v,left-s[i],val,nn,dp);
		val[i]--;
	}
	return count;
}
int coins(int * s, int n,int v){
	int val[100000]={0};
	unordered_map <string,bool> dp;
	sort(s,s+n);
	return h(s,n,v,v,val,0,dp);
}
main(){
	int n,v;
	cin>>n; int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cin>>v;
	cout<<coins(s,n,v);
}
