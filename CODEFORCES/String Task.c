#include <stdio.h>
main()
{
	int i;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='Y'&&s[i]!='O'&&s[i]!='U'&&s[i]!='a'&&s[i]!='e'&&s[i]!='y'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
		{
		if(s[i]>=97&&s[i]<=122) printf(".%c",s[i]);
		else if(s[i]>=65&&s[i]<=90)
		 {
		 s[i]=s[i]+32;
		 printf(".%c",s[i]);
         }
		}
	}
} 
