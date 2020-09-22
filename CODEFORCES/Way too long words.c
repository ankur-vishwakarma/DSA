#include <stdio.h>
#include <string.h>
main()
{
	char s[100][101];
	int n,i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++) 	scanf("%s",&s[i]);
	for(i=0;i<n;i++)
	{
	   l=strlen(s[i]);
	   if(l>10)  printf("%c%d%c\n",s[i][0],l-2,s[i][l-1]);
	   else printf("%s\n",s[i]);
	}
}
