#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s[n],t[m];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=0;i<m;i++) cin>>t[i];
		long long k=0,cost=0;
		int mp[n+1];
		for(int i=0;i<=n;i++) mp[i]=0;
		int itr=0;
		for(int i=0;i<m;i++){
			if(s[itr]==t[i]&&itr<n) cost+=(2*k+1),itr++;
			else if(mp[t[i]]) cost++,k--;
			else{
				while(s[itr]!=t[i]&&itr<n){
					mp[s[itr]]=1;
					itr++; k++;
				}
				//cout<<t[i]<<" k"<<k<<endl;
				cost+=(2*k+1),itr++;
			}
			//cout<<t[i]<<" "<<cost<<" "<<k<<endl;
		}
		cout<<cost<<"\n";
	}
}
