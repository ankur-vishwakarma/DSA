#include<stdio.h>
main()
{
	int n,i,sumx=0,sumy=0,sumz=0;
	scanf("%d",&n);
	int x[n],y[n],z[n];
	for(i=0;i<n;i++) scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for(i=0;i<n;i++)
	{
		sumx=x[i]+sumx;
		sumy=y[i]+sumy;
		sumz=z[i]+sumz;
	}
	if(sumx==0&&sumy==0&&sumz==0) printf("YES");
	else printf("NO");
}
