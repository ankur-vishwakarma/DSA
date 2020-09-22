#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>m>>n;
	int s[n][m];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];
	int t[n],max=0,flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]>max)
			{
				max=s[i][j];
				flag=j;
			}
		}
		t[i]=flag;
		max=0,flag=0;
	}
	int count=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    	   if(t[j]==t[i]) count++;
        }
        if(count>max)
        {
        	max=count;
        	flag=t[i];
		}
		else if(count==max)
		{
			if(flag<t[i]);
			else flag=t[i];
		}
		count=0;
	}
	cout<<flag+1;
}
