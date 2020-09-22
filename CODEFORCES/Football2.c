#include<stdio.h>
main()
{
	char s[101];
	scanf("%s",s);
	int i=0,count=0,z=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='1') count++;
		else
		{
			if(count<7) count=0;
		}
		if(s[i]=='0') z++;
		else
		{
			if(z<7) z=0;
		}
	}
	if(count>=7||z>=7) printf("YES");
	else printf("NO");
}
