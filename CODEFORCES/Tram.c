#include<stdio.h>
main()
{
	int s[1001][2],n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	int p=s[0][1]+s[1][1]-s[1][0],k=p;
	if(s[0][1]==s[1][0]&&s[1][1]<s[0][1]) max=s[0][1];
	else max=k;
	if(s[0][1]>max) max=s[0][1];
	for(i=1;i<n-1;i++)
	{
		k=k+s[i+1][1]-s[i+1][0];
		if(s[i][1]==s[i+1][0]&&s[i+1][1]<s[i][1]&&max<s[i][1]) max=s[i][1];
		else if(k>=max) max=k;
	}
	printf("%d",max);
}
