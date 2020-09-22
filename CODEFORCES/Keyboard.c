#include<stdio.h>
main()
{
	char st[100]="qwertyuiopasdfghjkl;zxcvbnm,./";
	char flag, str[101];
	int i,j;
	scanf("%c%s",&flag,str);
	if(flag=='L')
	{
		for(i=0;str[i]!='\0';i++)
		{
			for(j=0;st[j]!='\0';j++)
			{
				if(str[i]==st[j])
				{
					printf("%c",st[j+1]);
					break;
				}
			}
		}
    }
	else
	{
	
		for(i=0;str[i]!='\0';i++)
		{
			for(j=0;st[j]!='\0';j++)
			{
				if(str[i]==st[j])
				{
					printf("%c",st[j-1]);
					break;
				}
			}
		}
    }
}
