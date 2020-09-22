#include<stdio.h>
main()
{
	int i,n,count=0;
	scanf("%d",&n);
	char s[n][14];
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
		if(s[i][0]=='T') count+=4;
		else if(s[i][0]=='C') count+=6;
		else if(s[i][0]=='O') count+=8;
		else if(s[i][0]=='D') count+=12;
		else count+=20;
	}
	printf("%d",count);
}
