#include<stdio.h>
main()
{
	int n,i,m=0,c=0;
	scanf("%d",&n);
	int s[n][2];
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
	{
		if(s[i][0]>s[i][1]) m++;
		else if(s[i][0]<s[i][1]) c++;
	}
	if(m>c) printf("Mishka");
	else if(m<c) printf("Chris");
	else printf("Friendship is magic!^^");
}
