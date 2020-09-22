#include<stdio.h>
#include<string.h>
main()
{
	char s[10001];
	scanf("%s",s);
	int i,f1=0,f2=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='A'&&s[i+1]=='B'&&f1!=1)
		{
			 f1=1;
			 i++;
		}
		else if(s[i]=='B'&&s[i+1]=='A'&&f2!=1)
		{
			i++;
			f2=1;
		}
		if(f1==1&&f2==1)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
