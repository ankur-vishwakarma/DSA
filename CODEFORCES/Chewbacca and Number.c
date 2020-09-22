#include<stdio.h>
main()
{
	long long n;
	scanf("%I64d",&n);
	int s[19],c=0,i;
	s[0]=n%10;
	long long q=n;
	for(i=1;q/10!=0;i++)
	{
		q=q/10;
		s[i]=q%10;
		c++;
	}
	for(i=0;i<=c/2;i++)
	{
		int t=s[i];
		s[i]=s[c-i];
		s[c-i]=t;
	}
	if(s[0]!=9)
	{
		if(s[0]<(9-s[0])) printf("%d",s[0]);
		else printf("%d",9-s[0]);
	}
	else printf("9");
	for(i=1;i<=c;i++)
	{
		if(s[i]<(9-s[i])) printf("%d",s[i]);
		else printf("%d",9-s[i]);
	}
}
