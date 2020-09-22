#include<iostream>
using namespace std;
int a=0;
main()
{
	int n;
	cin>>n;
	int s[n*n];
	int k=n,var=-1,p=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<2*n+1;j++)
		{
			if(k>i)
			{
				cout<<" ";
				s[a++]=-1;
				k--;
			}
			else if(j<n+1)
			{
				var++;
				cout<<var;
				p++;
			//	s[a++]=var;
			}
			else if(p>1)
			{
				var--;
				cout<<var;
				p--;
			//	s[a++]=var;
			}
		}
		k=n,p=0,var=-1;
		cout<<"\n";
		s[a++]=-2;
	}
	s[a]=-3;
	/*for(int i=2*n+1;s[i]!=-3;i++)
	{
		if(s[i]==-1) cout<<" ";
		else if(s[i]==-2) cout<<"\n";
		else cout<<s[i];
	}*/
	
}
