#include<stdio.h>
main()
{
	int n;
	long i,j;
	double l;
	scanf("%d%lf",&n,&l);
	double s[n];
	for(i=0;i<n;i++) scanf("%lf",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				double temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
    }
	double min=0;
	for(i=0;i<=(n-2);i++)  if((s[i+1]-s[i])/2>min) min=(s[i+1]-s[i])/2;
	 if((s[0])>min) min=s[0];
	 if((l-s[n-1])>min) min=l-s[n-1];
	 if(n==2&&s[0]==0&&s[1]==l) min=l/2;
	printf("%0.10lf",min);
}
