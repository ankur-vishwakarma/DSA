#include<stdio.h>
main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	j=m*n;
	for(i=0;j>0;)
	{
		m=m-1;
		n=n-1;
		j=m*n;
		i++;
	}
	if(i%2==0) printf("sunil");
	else printf("ranjeet");
}
