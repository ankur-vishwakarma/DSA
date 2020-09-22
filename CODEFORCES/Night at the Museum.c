#include<stdio.h>
#include<string.h>
main()
{
	char s[101];
	scanf("%s",s);
	char t[]="abcdefghijklmnopqrstuvwxyz";
	int i,j,l=strlen(s),flag=0,mark=0,h,count=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<26;j++)
		{
			if(s[i]==t[j])
			{
				flag=j;
				break;
			}
		}
		h=flag-mark;
		if(h>=0) h=h;
		else h=-h;
		if(h<26-h) count=count+h;
		else count=count+(26-h);
		mark=flag;
	}
	printf("%d",count);
}
