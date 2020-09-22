#include<bits/stdc++.h>
using namespace std;
int m=0,c=0;
void lis(int * s,int n, int i){
	if(i>=n){
		//if(count>max) max=count;
		return;
	}
	cout<<*s<<" "<<i<<" "<<s[i]<<endl;
	if(*s<s[i]){
		c++;
	    lis(s+i,n-i,i+1);
		cout<<c<<endl;
	}
	else lis(s,n,i+1);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<n;i++) c=0,lis(s+i,n-i,i+1),m=max(c,m);
		cout<<m<<"\n";
	}
}
