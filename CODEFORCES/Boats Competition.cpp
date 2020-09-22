#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		if(n==1){
			cout<<"0\n";
			continue;
		}
		sort(s,s+n);
		int strt=s[0]+s[1],end=s[n-1]+s[n-2];
		int ans=0;
		for(int i=strt;i<=end;i++){
			int l=0,r=n-1,count=0;
			while(l<r){
				if(s[l]+s[r]>i) r--;
				else if(s[l]+s[r]<i) l++;
				else count++,l++,r--;
			}
			if(count>ans) ans=count;
		}
		cout<<ans<<endl;
	}
}
