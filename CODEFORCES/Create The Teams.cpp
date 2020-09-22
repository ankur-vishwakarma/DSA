#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		double x;
		cin>>n>>x;
		double s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n,greater<float>());
		int count=0,strt=0;
		for(int i=0;i<n;i++){
			if(s[i]>=x){
				count++,strt++;
				continue;
			}
			long long k=ceil(x/s[i]);
			//cout<<s[i]<<" "<<k<<" "<<i-strt+1<<endl;
			if(i-strt+1>=k){
				count++;
				strt=i+1;
			}
			/*int k=1;
			while(k*s[i]<x&&i<n){
				i++,k++;
			}
			if(i<n) count++;*/
		}
		cout<<count<<endl;
	}
}
