#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i,s[n],t[n],j;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
     	for(j=i+1;j<n;j++)
     	{
     		if(s[i]>s[j])
     		{
     			int temp=s[i];
     			s[i]=s[j];
     			s[j]=temp;
			}
	    }
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(s[i]!=s[i+1])
		{
			 t[j]=s[i];
			 j++;
		}
	}
	int p=0,k=0,g=0,sum=0,a,l;
	for(i=0;i<j;i++) 
	{
		a=t[i];
		if(i!=0) p=a-1;
		if(i!=n-1) k=a+1;
		for(l=0;l<n;l++) if(s[l]!=p&&s[l]!=k) sum=sum+s[l];
		if(sum>g) g=sum;
		sum=0,p=0,k=0;
	}
	printf("%d",g);
}
