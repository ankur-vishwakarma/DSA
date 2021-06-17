#include<bits/stdc++.h>
using namespace std;
main(){
	long long a,r,n;
	cin>>a>>r>>n;
	lobg ans= a*(int)(pow(r,n-1));
	cout<<ans;
	
	
	/*int n;
	cin>>n;
	int s=10;
	while(n){
		int i=n%10;
		if(i<s) s=i;
		n/=10;
	}
	cout<<s<<endl;*/
}
