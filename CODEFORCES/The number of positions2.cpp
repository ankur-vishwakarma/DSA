#include<iostream>
using namespace std;
main(){
	int n,a,b;
	cin>>n>>a>>b;
	if(n-a<=b+1){
		 cout<<n-a;
		 return 0;
	}
	else while(n-a>b+1&&a+b<=n) a++;
	if(n-a<=b+1) cout<<n-a;
	else cout<<"0";
}
