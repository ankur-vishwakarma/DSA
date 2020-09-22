#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int s[m],t[n];
		for(int i=0;i<m;i++) cin>>s[i];
		for(int i=0;i<n;i++) cin>>t[i],t[i]--;
		int isallowed[m]={0};
		for(int i=0;i<n;i++) isallowed[t[i]]=1;
		int flag;
		for(int i=0;i<m;i++){
			flag=0;
			for(int j=i;j<m-1;j++){
				if(s[j]>s[j+1]){
					if(isallowed[j]) swap(s[j],s[j+1]);
					else{ flag=1; break; }
				}
			}
			if(flag==1) break;
		}
		if(flag==1) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
