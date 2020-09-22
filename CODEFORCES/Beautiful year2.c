#include<stdio.h>
main()
{
	int y,c=0,p,i,j;
	int s[4];
	scanf("%d",&y);
	while(c!=4)
	{
		c=0;
		y++;
		p=y;
		for(i=0;i<4;i++)
		{
			s[i]=p%10;
			p=p/10;
		}
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(s[i]==s[j]) break;
			}
			if(s[i]==s[j]) break;
			c++;
		}
	}
	printf("%d",y);
}
