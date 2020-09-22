#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[101];
	scanf("%[^\n]",s);
	int i,l=strlen(s),count=0;
	for(i=0;i<l;i++) if(s[i]>=48&&s[i]<=57) count++;
	if(count==l) printf("YES\n%s",s);
	else
	{
			printf("NO\n");
		for(i=0;i<l;i++)
		{
			if(s[i]==' ') printf("IIT");
			else printf("%c",s[i]);
		}
	}
	return 0;
}
