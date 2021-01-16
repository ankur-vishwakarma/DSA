#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[n],p[n];
		for(int i=0;i<n;i++) cin>>s[i];
		p[0]=s[0];
		for(int i=1;i<n;i++) p[i]=p[i-1]+s[i];
		int min=INT_MAX,b,e;
		for(int i=k;i<=n;i++){
			int sum=p[i-1]-p[i-k]+s[i-k];
			if(sum<min) min=sum,b=i-k,e=i-1;
		}
		cout<<b+1<<" "<<e+1<<endl;
	}
}
