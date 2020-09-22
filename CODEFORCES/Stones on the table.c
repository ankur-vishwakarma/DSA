#include<stdio.h>
main()
{
	int i,n,count=0;
	char s[51];
	scanf("%d%s",&n,s);
	for(i=0;i<n;i++) 
	{
		if(s[i]==s[i+1]) count++;
	}
	printf("%d",count);
}
