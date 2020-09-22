#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(s[i][j]=='1'){
					//cout<<i<<" "<<j<<endl;
					if(i+1>=n||j+1>=n) continue;
					if(s[i+1][j]=='1'||s[i][j+1]=='1') continue;
					//cout<<"b";
					flag=1;
					break;
				}
			}
			if(flag) break;
		}
		if(!flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
