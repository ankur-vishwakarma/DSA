#include<stdio.h>
main()
{
	int n,m,i,j,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j]-1||a[i]==b[j]+1||a[i]==b[j])
			{
				b[j]=102;
				count++;
				break;
			}
		}
	}
	printf("%d",count);
}
