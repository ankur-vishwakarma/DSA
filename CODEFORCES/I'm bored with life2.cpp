#include<iostream>
using namespace std;
long long fact(int k)
{
	long long f=1;
	while(k!=1)
	{
		f=f*k;
		k--;
	}
	return f;
}
main()
{
	int a,b;
	cin>>a>>b;
	if(a>=b) cout<<fact(b);
	else cout<<fact(a);
}
