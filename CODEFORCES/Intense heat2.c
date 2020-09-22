#include<stdio.h>
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	float sum=0,s[n];
	int count=n,r,i,j,u=0,c,co=0,k1=k;
	for(i=0;i<n;i++) scanf("%f",&s[i]);
	for(i=1;count>=k;i++)
	{
		r=r+i;
		count--;
	}
	float t[r];
	while(k<=n)
	{
		j=0,c=k;
		for(i=0;i+k<=n;i++)
		{
			while(j<c)
			{
				sum=sum+s[j];
				j++; 
			}
			co++;
			t[u]=sum/k;
			sum=0;
			j=co,c++;
		}
		k++;
		u++;
	}
	for(i=0;i<r;i++) printf("%f ",t[i]);
	/*float l=0;
	for(i=0;i<(n-k1+1);i++)
	{
		 for(j=0;j<(n-k1+1)-i;j++)
		 {
		 	if(t[i][j]>l) l=t[i][j];
		 }
	}
	printf("%f",l);*/
}
