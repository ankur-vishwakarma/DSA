#include<stdio.h>
#include<string.h>
main()
{
	char s[101],t[101];
	int l,i,j,flag=0;
	scanf("%s%s",s,t);
	l=strlen(s);
	for(i=0,j=l-1;i<l&&j>=0;i++,j--)
	{
		if(s[i]!=t[j])
		{
			flag=1;
			break;
		}
	}
	if(flag!=1) printf("YES");
	else printf("NO");
}
