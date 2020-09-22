#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	int i,o=0,z=0,min;
	for(i=0;i<n;i++)
	{
		if(s[i]=='1') o++;
		else z++;
	}
	if(o>z) min=z;
	else min=o;
	printf("%d",n-2*min);
}
