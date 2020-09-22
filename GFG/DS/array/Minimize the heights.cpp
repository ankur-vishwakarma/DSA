#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>k>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		if(n==1){
			cout<<"0\n";
			continue;
		}
		sort(s,s+n);
		int l=0,r=n-1,d=INT_MIN,dp=s[r]-s[l],fl=0,fr=0;
		while(l<r){
			if(!fl) s[l]+=k;
			if(!fr) s[r]-=k;
			d=max(abs(s[r]-s[l]),d);
			if(d>dp){
				//backtrack
				s[l]-=k,s[r]+=k;
				break;
			}
			if(s[r]>s[r-1]) fr=1;
			else r--;
			if(s[l]<s[l+1]) fl=1;
			else l++;
			if(l>=r) break;
			cout<<d<<" "<<s[l]<<" "<<s[r]<<endl;
			if(d>dp){ d=dp; break; }
			if(fl&&fr) break;
			dp=max(abs(s[r]-s[l]),d);
			for(int i=0;i<n;i++) cout<<s[i]<<" ";
			cout<<endl;
		}
		for(int i=0;i<n;i++) cout<<s[i]<<" ";
		if(n%2!=0) d=max(d,max(abs(s[n/2]-s[n/2-1]),abs(s[n/2+1]-s[n/2])));
		sort(s,s+n);
		d=max(s[n-1]-s[0],d);
		cout<<d<<"\n";
	}
}
/*1 6 6 1 10 14 14 14 15
9
12
10 2 16 30 26 11 21 11 47 3 20 20

*/
