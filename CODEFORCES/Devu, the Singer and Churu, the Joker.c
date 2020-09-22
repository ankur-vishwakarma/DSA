#include<stdio.h>
main()
{
	int n,d,j=0;
	scanf("%d%d",&n,&d);
	int i,t[n],sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		sum=sum+t[i]+10;
		j+=2;
	}
	j=j-2;
	sum=sum-10;
	int l=d-sum;
	if(l<0) printf("-1");
	else printf("%d",j+(d-sum)/5);
/*	{
		
	}
	printf("%d",sum);
	if((d-sum)%5==0) 
	else printf("-1");*/
}
