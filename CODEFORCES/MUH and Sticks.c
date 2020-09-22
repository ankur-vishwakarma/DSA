#include<stdio.h>
main()
{
	int s[6],i,c=1,j,l;
	for(i=0;i<6;i++) scanf("%d",&s[i]);
	for(i=0;i<6;i++)
	{
		c=1;
		for(j=i+1;j<6;j++) if(s[i]==s[j]) c++;
		if(c==4)
		{
			l=s[i];
			break;
		}
	}
	if(c!=4)
	{
		printf("Alien");
		return 0;
	}
	int co=0;
	for(j=0;j<6&&co<=3;j++)
	{
		if(s[j]==l)
		{
			s[j]=0;
			co++;
	    }
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(s[i]==s[j]&&s[i]!=0) printf("Elephant");
			else if(s[i]!=s[j]&&s[i]!=0&&s[j]!=0) printf("Bear");
		}
	}
}
