#include<iostream>
using namespace std;
main()
{
	long long n;
	cin>>n;
	cout<<n;
	while(n!=0)
	{
		cout<<n%10;
		n=n/10;
	}
}

