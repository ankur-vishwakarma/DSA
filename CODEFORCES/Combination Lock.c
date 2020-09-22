#include<stdio.h>
main()
{
	int n,i,gr,sm,min,move=0;
	scanf("%d",&n);
	char s[n+1],t[n+1];
	scanf("%s%s",s,t);
	for(i=0;i<n;i++)
	{
		if(s[i]>t[i]) gr=s[i],sm=t[i];
		else gr=t[i],sm=s[i];
		min=(sm-0+1)+(9-gr);
		if(min<gr-sm) move=move+min;
		else move=move+gr-sm;
	}
	printf("%d",move);
}
