fun(char s[],int n,int o,int z)
{
	int i,count=n;
	for(i=0;i<count&&z>0&&o>0;i++)
	{
		if((s[i]=='0' && s[i+1]=='1')||(s[i]=='1' && s[i+1]=='0'))
		{
			s[i]='2',s[i+1]='2';
			count=count-2;
			z--,o--;
			int j=0,k;
			for(k=0;k<n;k++)
			{
				if(s[k]=='1'||s[k]=='0')
				{
					s[j]=s[k];
				    j++;
				}
			}
			n=n-2;
	    }
	}
	if(count>0&&z>0&&o>0) fun(s,n,o,z);
	else
	{
		printf("%d",count);
		return 0;
	}
}
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	int i,count=n,o=0,z=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='1') o++;
		else z++;
	}
	fun(s,n,o,z);
}
