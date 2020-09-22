#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	if(m==n) cout<<"0";
	else if(m<n) cout<<n-m;
	else{
		int a=n,b=m,c=0,d=0;
		while(a>0) a/=2,c++;
		while(b>0) b/=2,d++;
		int e=d-c;
		n=n*pow(2,e);
		cout<<(n-m)+e;
	}
}
