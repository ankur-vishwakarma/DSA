#include <stdio.h>
main()
{
	int mark[5],i,s30=0,s50=0,s65=0,s79=0,s81=0;
	float sum=0;
	for(i=0;i<5;i++)
	{
		printf("enter marks of %d th student",i+1);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<5;i++)
	{
		if(mark[i]<=30) s30++;
		else if(mark[i]>30&&mark[i]<=50) s50++;
		else if(mark[i]>50&&mark[i]<=65) s65++;
		else if(mark[i]>65&&mark[i]<80) s79++;
		else if(mark[i]>=80) s81++;
		sum=sum+mark[i];
	}
	printf("%d\n%d\n%d\n%d\n%d\n%f",s30,s50,s65,s79,s81,sum/5);
}
