#include<stdio.h>
main()
{
	char s[101];
	scanf("%s",s);
	int i,c=0,d=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90) c++;
		else if(s[i]>=97&&s[i]<=122) d++;
	}
	if(c>d)
	{
		for(i=0;s[i]!='\0';i++)
		{
			 if(s[i]>=97&&s[i]<=122) s[i]=s[i]-32;
			  printf("%c",s[i]);
		}
	   
	}
	else
	{
		for(i=0;s[i]!='\0';i++)
		{
			 if(s[i]>=65&&s[i]<=90) s[i]=s[i]+32;
			   printf("%c",s[i]);
		}
		
	}
	
}
