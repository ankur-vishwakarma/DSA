#include<stdio.h>
main()
{
	long q;
	scanf("%ld",&q);
	long long s[q],sum=0,i,j;
	int t[q];
	for(i=0;i<q;i++) scanf("%lld%d",&s[i],&t[i]);
	for(i=0;i<q;i++)
	{
		if(t[i]==1) for(j=1;sum<=s[i];j++) sum=sum+j;
		if(t[i]==2) for(j=1;sum<=s[i];j++) sum=sum+(j*j);
		if(t[i]==3) for(j=1;sum<=s[i];j++) sum=sum+(j*j*j);
		printf("%lld\n",j-2);
		sum=0;
	}
}
