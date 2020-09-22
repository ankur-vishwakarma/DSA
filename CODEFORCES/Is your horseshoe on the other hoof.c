#include<stdio.h>
main()
{
	long s[4];
	int i,j,count=0;
	scanf("%ld%ld%ld%ld",&s[0],&s[1],&s[2],&s[3]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(s[i]>s[j])
			{
				long temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++) if(s[i]==s[i+1]) count++;
	printf("%d",count);
}
