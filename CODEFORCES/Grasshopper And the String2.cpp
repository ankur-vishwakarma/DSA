#include<iostream>
using namespace std;
main()
{
	string s;
	cin>>s;
	s='A'+s;
	s=s+'A';
	int i,prev=0,curr,max=1;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			curr=i;
			if(curr-prev>max) max=curr-prev;
		}
		prev=curr;
	}
	cout<<max;
}
