#include<stdio.h>
main()
{
	char s[101];
	scanf("%s",s);
	int count=1,i,j;
	for(i=0;s[i]!='\0'||count!=7;i++)
	{
		for(j=i+1;s[j]!='\0'||count!=7;j++)
		{
			if(s[i]==s[j]) count++;
			else
			{
				count=1;
				break;
			}
		}
	}
	if(count==7) printf("YES");
	else printf("NO");
}
