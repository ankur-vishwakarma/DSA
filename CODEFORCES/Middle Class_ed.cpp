#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long s[n];
		long long sum=0;
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		long long x=0;
		if(s[n-1]<k){
			cout<<"0\n";
			continue;
		}
		long long flag=0;
		for(int i=n-1;i>=0;i--){
			sum+=s[i],x++;
			if(sum<x*k){
				flag=x-1;
				break;
			}
			flag=x;
		}
		cout<<flag<<endl;
	}
}
