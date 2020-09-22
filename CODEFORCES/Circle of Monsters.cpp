#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll s[n],t[n];
		for(int i=0;i<n;i++) cin>>s[i]>>t[i];
		ll comb[n],alone[n+1],end=0;
		comb[n-1]=alone[n-1]=0;
		for(int i=n-2;i>=0;i--){
			if(s[i+1]>t[i]) alone[i]=s[i+1]-t[i];
			else alone[i]=0;
			comb[i]=comb[i+1]+alone[i];
		}
		if(t[n-1]<s[0]) end=s[0]-t[n-1];
		//lets cummulate alone array
		for(int i=1;i<n;i++) alone[i]=alone[i]+alone[i-1];
		for(int i=n;i>=1;i--) alone[i]=alone[i-1];
		//for(int i=0;i<n;i++)	cout<<comb[i]<<" "<<alone[i]<<endl;
		ll m=s[0]+comb[0];
		alone[0]=0;
		for(int i=1;i<n;i++){
			//to_break_me + to_break_till_end + end + to_break_till_me_from_strt
			ll to_break=s[i]+comb[i]+end+alone[i-1];
			m=min(m,to_break);
		}
		cout<<m<<endl;
	}
}
