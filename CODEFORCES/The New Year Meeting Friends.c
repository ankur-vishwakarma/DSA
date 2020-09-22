#include<stdio.h>
main()
{
	int s[3],i,j;
	scanf("%d%d%d",&s[0],&s[1],&s[2]);
	for(i=0;i<3;i++)
	{
     	for(j=i+1;j<3;j++)
     	{
     		if(s[i]>s[j])
     		{
     			int temp=s[i];
     			s[i]=s[j];
     			s[j]=temp;
			}
	    }
	}
	int k=(s[2]-s[1])+(s[1]-s[0]);
	printf("%d",k);
}
