#include<stdio.h>
#include<string.h>
main()
{
	char s[101],t[101];
	scanf("%s%s",s,t);
	int i,l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=t[i]) printf("1");
		else printf("0");
	}
}
