#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		int l=s[0],r=s[n-1]-s[0];
		int m;
		while(l<=r){
			m=(l+r)/2;
			//check for m
			int strt=0,i=1,cows=c-1;
			while(cows&&i<n){
				if(s[i]-s[strt]>=m){
					cows--;
					strt=i,i++;
				}
				else i++;
			}
			if(cows==0) l=m+1;
			else r=m-1;
		}
		cout<<m<<endl;
	}
}
