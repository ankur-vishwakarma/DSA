#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		float k;
		cin>>n>>k;
		float s[n];
		double sum=0;
		for(int i=0;i<n;i++) cin>>s[i],sum+=s[i];
		sort(s,s+n);
		int i=0,flag=0;
		float size=n;
		while(size>0){
			if(sum/size>=k){
				flag=1;
				cout<<size<<endl;
				break;
			}
			sum-=s[i],size--,i++;
		}
		if(!flag&&size==0) cout<<"0\n";
	}
}
