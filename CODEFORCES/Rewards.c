#include<stdio.h>
main()
{
	int j,i,s[6],n,a=0,b=0;
	for(i=0;i<6;i++) scanf("%d",&s[i]);
	scanf("%d",&n);
	for(i=0,j=3;i<3;i++,j++)
	{
		a+=s[i];
		b+=s[j];
	}
	if(a%5==0) a=a/5;
	else a=a/5+1;
	if(b%10==0) b=b/10;
	else b=b/10+1;
	if(a+b<=n) printf("YES");
	else printf("NO");
}
