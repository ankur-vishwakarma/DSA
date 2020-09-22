#include<iostream>
using namespace std;
main()
{
	long long n,x;
	cin>>n>>x;
	int s[n],count=0;
	char t[n];
	for(int i=0;i<n;i++) cin>>t[i]>>s[i];
	for(int i=0;i<n;i++)
	{
		if(t[i]=='+') x=x+s[i];
		else
		{
			if(x<s[i]) count++;
			else x=x-s[i];
		}
	}
	cout<<x<<" "<<count;
}
