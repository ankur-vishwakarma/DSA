#include<iostream>
using namespace std;
main()
{
	int y,w,max;
	cin>>y>>w;
	if(y>=w) max=y;
	else max=w;
	int p=7-max;
	if(p==6) cout<<"1/1";
	else if(p==3) cout<<"1/2";
	else if(p%2==0) cout<<p/2<<"/"<<3;
	else cout<<p<<"/6";
}
