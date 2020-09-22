#include<iostream>
#include<string>
using namespace std;
int c=0;
main()
{
	int n,i,j;
	cin>>n;
	string s[n],t[n];
	int p[n],flag=0,copy=0,k,c=0;
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++)
	{
		for(k=0;k<c;k++)
		{
			if(s[i]==t[k])
			{
				cout<<t[k]<<p[k]<<"\n";
				p[k]++;
				flag=1;
		  	    copy=1;
			}
		}
	    if(copy!=1)
	    {
	    	for(j=0;j<i;j++)
		{
			if(s[i]==s[j])
			{
			    t[c]=s[i];
			    p[c]=2;
			    c++;
				cout<<s[i]<<"1\n";
				s[i]='\0';
				flag=1;
			}
		}
		}
		if(flag!=1) cout<<"OK\n";
		flag=0;
		copy=0;
	}
}
