#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	string s,m;
	cin>>s;
	long cal=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='1') cal=cal+a;
		else if(s[i]=='2') cal=cal+b;
		else if(s[i]=='3') cal=cal+c;
		else cal=cal+d;
	}
	cout<<cal;
}
