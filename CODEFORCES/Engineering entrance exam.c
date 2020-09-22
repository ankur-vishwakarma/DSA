#include<stdio.h>
main()
{
	long n,r,c,q,i,j,k,min=0,len;
	scanf("%ld%ld%ld%ld",&n,&r,&c,&q);
	long s[r][3];
	for(i=0;i<r;i++) scanf("%ld%ld%ld",&s[i][0],&s[i][1],&s[i][2]);
	long cen[c],hc[q];
	for(i=0;i<c;i++) scanf("%ld",&cen[i]);
	for(i=0;i<q;i++) scanf("%ld",&hc[i]);
	for(i=0;i<q;i++)
	{
		for(j=0;j<cen;j++)
		{
			for(k=0;k<r;k++)
			{
				if((hc[i]==s[k][0]&&cen[j]==s[k][1])||(hc[i]==s[k][1]&&cen[j]==s[k][0]))
				{
					len=s[k][2];
					if(min==0) min=len;
					else if(len<min) min=len;
					break;
				}
			}
		}
		if(min>0) printf("%ld\n",min);
		else if(min==0) printf("-1");
		min=0;
	}
}
