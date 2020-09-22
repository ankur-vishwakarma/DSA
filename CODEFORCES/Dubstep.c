#include<stdio.h>
main()
{
	char s[201],count=0,flag=0;
	scanf("%s",s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
			 i=i+2;
			 flag=1;
		}
		else
		{
			if(count==1&&flag==1) printf(" %c",s[i]);
			else
			{
				 printf("%c",s[i]);
				 count=1;
			}
			flag=0;
		}
	}
}
