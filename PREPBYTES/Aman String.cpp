#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int lst_found=-1,n=s.length();
		long long ans=0;
		for(int i=0;i<=n-4;i++){
			if(s[i]=='a'&&s[i+1]=='m'&&s[i+2]=='a'&&s[i+3]=='n'){
				int aftr_subs=n-(i+3);
				int before_subs=(i-(lst_found+1))*aftr_subs;
				ans+=(aftr_subs+before_subs);
				cout<<before_subs<<" "<<aftr_subs<<endl;
				//ans+=before_subs;
				lst_found=i;
			}
		}
		cout<<ans<<endl;
	}
}
