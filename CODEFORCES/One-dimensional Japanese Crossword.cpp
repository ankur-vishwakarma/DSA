#include<iostream>
using namespace std;
main()
{
	int n,i;
	string s;
	cin>>n>>s;
	int p[n]={0},count=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			while(s[i]!='W')
			{
				p[count]++;
				i++;
				if(i==n) break;
			}
			count++;
		}
	}
	cout<<count<<"\n";
	for(i=0;i<count;i++) cout<<p[i]<<" ";
}
