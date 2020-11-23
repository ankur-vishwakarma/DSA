#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int f[10]={};
		for(int i=0;i<s.size();i++) f[s[i]-'0']++;
		
		int ans=0;
		for(int i=0;i<10;i++) ans=max(ans,f[i]);
		
		//pairs one by one
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(i==j) continue;
				int flag=0,local=0;
				for(int k=0;k<s.size();k++){
					int a=s[k]-'0';
					if(a!=i&&a!=j) continue;
					if(a==i&&flag==0) local++,flag=1;
					else if(a==j&&flag==1) local++,flag=0;
				}
				if(local%2!=0) local--;
				ans=max(local,ans);
			}
		}
		cout<<s.size()-ans<<endl;
	}
}
