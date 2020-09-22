#include<stdio.h>
main()
{
	char s[51];
	int t,n,i,k;
	scanf("%d%d%s",&n,&t,s);
	for(k=0;k<t;k++)
	{
		for(i=0;i<n;i++)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	printf("%s",s);
}
