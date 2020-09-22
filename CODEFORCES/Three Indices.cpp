#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		//map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>s[i];
		//	mp[s[i]]=i;
		}
		int flag=0;
		for(int i=1;i<n-1;i++){
			bool l=false,r=false;
			int pl,pr;
			for(int j=i-1;j>=0;j--){
			//	cout<<s[j]<<endl;
				if(s[j]<s[i]){
					l=true;
					pl=j;
					break;
				}
			}
			if(l){
				for(int j=i+1;j<n;j++){
					//cout<<s[j]<<endl;
				if(s[j]<s[i]){
					r=true;
					pr=j;
					break;
				}
				}
			}
			//cout<<pl<<" "<<pr<<endl;
			if(l&&r){
				cout<<"YES\n";
				cout<<pl+1<<" "<<i+1<<" "<<pr+1<<endl;
				flag=1;
				break;
			}
		}
		if(!flag) cout<<"NO\n";
	}
}
