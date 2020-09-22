#include<stdio.h>
main()
{
	int n,count,i,j,x=0;
	char s[150][4];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s",&s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i][1]=='+') x++;
		else if(s[i][1]=='-') x--;
	}
	printf("%d",x);
}
