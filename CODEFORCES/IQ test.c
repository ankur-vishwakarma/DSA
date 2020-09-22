#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],i,j;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	int e=0,o=0;
	for(i=0;i<n;i++)
	{
		if(s[i]%2==0) e++;
		else o++;
		if(e>1||o>1) break;
	}
	if(e>1) for(i=0;;i++) if(s[i]%2!=0)
	{
		printf("%d",i+1);
		return 0;
	}
	if(o>1) for(i=0;;i++) if(s[i]%2==0)
	{
		printf("%d",i+1);
		return 0;
	}
}
