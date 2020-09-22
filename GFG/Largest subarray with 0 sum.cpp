#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n+1];
	cin>>s[1];
	for(int i=2;i<=n;i++) cin>>s[i],s[i]+=s[i-1];
	
	map<int,int> m;
	int l=0;
	for(int i=1;i<=n;i++){
		if(s[i]==0){
			l=max(1,l);
			continue;
		}
		if(m[s[i]]){
			l=max(l,i-m[s[i]]);
		}else{
			m[s[i]]=i;
		}
	}
	cout<<l<<endl;
}
