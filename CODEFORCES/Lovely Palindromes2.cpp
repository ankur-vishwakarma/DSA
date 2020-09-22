#include<iostream>
using namespace std;
main()
{
	string s;
	cin>>s;
	cout<<s;
	long long l=s.size();
	for(long long i=l-1;i>=0;i--) cout<<s[i];
}

