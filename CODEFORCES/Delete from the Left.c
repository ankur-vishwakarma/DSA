#include<stdio.h>
#include<string.h>
main()
{
	char s[20000],t[20000];
	scanf("%s%s",s,t);
	int i,j,count=0,sl=strlen(s),tl=strlen(t),sl2=sl,tl2=tl;
	for(i=sl-1,j=tl-1;sl!=0||tl!=0;i--,j--)
	{
		if(s[i]!=t[j]) break;
		count++;
		sl--;
		tl--;
	}
	printf("%d",(sl2-count)+(tl2-count));
}
