#include<stdio.h>
main()
{
	int n,i,m,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	for(i=1;i<n;i++) a[i]=a[i]+a[i-1];
	for(i=0;i<m;i++)
	{
		int start=0,end=n-1;
		for(j=0;j<n;j++)
		{
			int mid=(start+end)/2;
			if(a[mid]==b[j])
			{
				printf("%d\n",j+1);
				break;
			}
			else if(b[j]<a[mid]) end=mid-1;
			else if(b[j]>a[mid]) start=mid+1;
		}
	}
	
}
