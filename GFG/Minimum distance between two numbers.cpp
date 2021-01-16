#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		cin>>x>>y;
		int l=0,r=l+1,i=0,d=INT_MAX,sum=x+y;
		while(i<n){
			while(s[i]!=x&&s[i]!=y&&i<n) i++;
			l=i;
			while(s[i]!=sum-s[l]&&i<n) i++;
			r=i;
			if(i==n) break;
			d=min(d,abs(r-l));
			i=l+1;
		}
		if(d==INT_MAX) cout<<"-1\n";
		else cout<<d<<"\n";
	}
}
