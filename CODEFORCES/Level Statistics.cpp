#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n][2];
		for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
		int flag=0;
		if(s[0][0]<s[0][1]){
			cout<<"NO\n";
			continue;
		}
		for(int i=1;i<n;i++){
			int plays=s[i][0]-s[i-1][0];
			int clears=s[i][1]-s[i-1][1];
			if(plays>=0&&clears>=0&&plays>=clears){
				continue;
			}
			else{
				flag=1;
				cout<<"NO\n";
				break;
			}
		}
		if(!flag) cout<<"YES\n";
	}
}
/*if(s[i][0]<s[i-1][0]|s[i][1]<s[i-1][1]||s[i][0]<s[i][1]||s[i][0]-s[i-1][0]<s[i][1]-s[i-1][0]){
				cout<<"NO\n";
				flag=1;
			    break;
			}*/
