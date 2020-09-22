#include<stdio.h>
#include<string.h>
main()
{
	char s[101],t[101];
	int k;
	scanf("%s%s",s,t);
	strlwr(s);
	strlwr(t);
	k=strcmp(s,t);
	if(k>0) printf("1");
	else if(k<0) printf("-1");
	else if(k==0) printf("0");
}
