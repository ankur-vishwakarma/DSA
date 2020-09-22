#include<stdio.h>
main()
{
	char s[101];
	int i,j,a=0,b=0,c=0,d=0;
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]=='h'&&s[j]=='e'&&a==0)
			{
			 a=1;
			 i=j;	
			}
			else if(s[i]=='e'&&s[j]=='l'&&b==0&&a==1)
			{
				 b=1;
				 i=j;	
			}
			else if(s[i]=='l'&&s[j]=='l'&&c==0&&a==1&&b==1)
			{
				 c=1;
				 i=j;
			}
			else if(s[i]=='l'&&s[j]=='o'&&d==0&&a==1&&b==1&&c==1)
			{
				 d=1;
				 i=j;
			}
		}
	}
	if(a==1&&b==1&&c==1&&d==1) printf("YES");
	else printf("NO");
}
