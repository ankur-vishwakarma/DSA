#include<iostream>
using namespace std;
main(){
	int a,b,max,min;
	cin>>a>>b;
	if(a==0&&b==0) cout<<"NO";
	else{
		if(a>b) max=a,min=b;
	else max=b,min=a;
	if(max-min<=1) cout<<"YES";
	else cout<<"NO";
	}
}
