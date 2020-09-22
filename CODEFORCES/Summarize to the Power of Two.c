#include<stdio.h>
#include<math.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],i,t[n],j=0;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
		int k=log2(s[i]);
		if(log2(s[i])-k!=0)
		{
			t[j]=s[i];
			j++;
		} 
	}
	int l=j-1;
	for(i=0;i<l;i++) printf("%d ",t[i]);
	printf("%f",log2(5));
}
