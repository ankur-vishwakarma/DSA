#include<iostream>
#include<cstring>
using namespace std;
main()
{
	string s,p;
	int n,k,i;
	cin>>n>>k>>s;
	int l=s.size();
	strcpy(p,s);
	for(i=0;i<l;i++)
	{
		if(s[i]==s[l-1-i]) p[l-1-i]='\0';
		cout<<p;
	}
}
