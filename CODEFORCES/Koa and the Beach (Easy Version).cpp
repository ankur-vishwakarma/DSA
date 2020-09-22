#include<bits/stdc++.h>
using namespace std;
bool rec(int s[][100],int n,int k,int l,int i,int j){
	//cout<<i<<" "<<j<<endl;
	if(j==n) return true;
	if(i>=2*k) return false;
	bool ans=false;
	int p=i,q=i-1;
	if(i==0) p=i,q=2*k-1;
	for(;p<(2*k);p++,q++){
		if(q>=(2*k)) q=0;
		//cout<<p<<"p q"<<q<<" "<<s[p][j]<<"s "<<s[q][j-1]<<endl;
		if(s[q][j-1]>l) return false;
		if(s[p][j]<=l&&s[q][j-1]<=l) ans=rec(s,n,k,l,(p+1)%(2*k),j+1);
		//cout<<ans<<endl;
		if(ans) return true;
	}
	p=0,q=2*k-1;
	for(;p<i;p++,q++){
		if(q>=(2*k)) q=0;
		//cout<<p<<"pa q"<<q<<" "<<s[p][j]<<"s "<<s[q][j-1]<<endl;
		if(s[q][j-1]>l) return false;
		if(s[p][j]<=l&&s[q][j-1]<=l) ans=rec(s,n,k,l,(p+1)%(2*k),j+1);
		//cout<<ans<<endl;
		if(ans) return true;
	}
	return false;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,l;
		cin>>n>>k>>l;
		int s[2*k][100];
		for(int i=0;i<n;i++) cin>>s[0][i];
		int kk=1;
		for(int i=1;i<2*k;i++){
			for(int j=0;j<n;j++) s[i][j]=s[0][j]+kk;
			if(i<k) kk++;
			else kk--;
		}
		/*for(int i=0;i<2*k;i++){
			for(int j=0;j<n;j++) cout<<s[i][j]<<" ";
			cout<<endl;
		}*/
		bool ans=false;
		for(int i=0;i<2*k;i++){
			if(s[i][0]<=l) ans=rec(s,n,k,l,i+1,1);
			if(ans) break;
		}
		if(ans) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
