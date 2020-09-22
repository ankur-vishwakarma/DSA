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
		long long l=0,z=0,o=0;
		for(int i=0;i<n;i++){
			l+=s[i].size();
			for(int j=0;j<s[i].size();j++){
				if(s[i][j]=='1') o++;
				else z++;
			}
		}
		//cout<<o<<" "<<z<<" ";
		if(z%2==0||o%2==0) cout<<n<<endl;
		else{
			int count=0;
			for(int i=0;i<n;i++) if(s[i].size()%2==0) count++;
			if(count==n) cout<<n-1<<endl;
			else cout<<n<<endl;
		}
	}
}
