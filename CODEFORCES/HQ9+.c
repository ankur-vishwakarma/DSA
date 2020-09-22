#include<stdio.h>
main()
{
	char s[101];
	int i,count=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9') count=1;
	} 
	if(count==1) printf("YES");
	else printf("NO");
}
