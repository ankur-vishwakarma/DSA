#include<stdio.h>
#include<string.h>
main()
{
	char s[101];
	scanf("%s",s);
	int i,count=1,l=strlen(s);
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90) count++;
	}
	
	if(count==l)
	{
		if(s[0]>=97&&s[0]<=122) s[0]=s[0]-32;
		else if(s[0]>=65&&s[0]<=90) s[0]=s[0]+32;
		for(i=1;s[i]!='\0';i++) s[i]=s[i]+32;	
	}
	printf("%s",s);
}
