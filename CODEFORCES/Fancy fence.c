#include<stdio.h>
main()
{
	int n,i;
	scanf("%d",&n);
	int s[n];
    for(i=0;i<n;i++)	scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		if(360%(180-s[i])==0) printf("YES\n");
		else printf("NO\n");
	}
}
