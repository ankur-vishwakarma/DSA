#include<iostream>
using namespace std;
main()
{
	long long a,b,s;
	cin>>a>>b>>s;
	if(a<0) a=-a;
	if(b<0) b=-b;
	long long k=(s-(a+b));
	if(k%2==0&&k>=0) cout<<"Yes";
	else cout<<"No";
}
