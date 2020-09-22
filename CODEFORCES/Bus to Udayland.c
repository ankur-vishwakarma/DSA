#include<stdio.h>
main()
{
	int i,n,flag=0;
	scanf("%d",&n);
	char s[n][6];
	for(i=0;i<n;i++) scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i][0]=='O'&&s[i][1]=='O')
		{
			printf("YES\n");
			s[i][0]='+',s[i][1]='+';
			flag=1;
			break;
		}
		if(s[i][3]=='O'&&s[i][4]=='O')
		{
			printf("YES\n");
			s[i][3]='+',s[i][4]='+';
			flag=1;
			break;
		}
	}
	if(flag==0) printf("NO");
	else
	{
		for(i=0;i<n;i++) printf("%s\n",s[i]);
	}
}
