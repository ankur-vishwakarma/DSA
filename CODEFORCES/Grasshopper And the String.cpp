#include<iostream>
using namespace std;
int main()
{
	char s[101];
	cin>>s;
	int i,n=1,j,lap=1,l=1,a;
	for(i=1;s[i]!='\0';i++) n++;
	for(i=0;i<n;i++)
	{
		 if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			 a=i;
			 break;
		}	 
	}
	for(i=a;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'||s[j]=='Y')
			{
				printf("%di %dj\n",i,j);
				lap=j-i;
				cout<<lap<<"\n";
				i=j;
				break;
			}
		}
		cout<<i<<"j1 ";
		if(lap>l) l=lap;
	}
	cout<<l;
	return 0;
}
