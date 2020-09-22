#include<stdio.h>
#include<math.h>
main()
{
	int i,n,j,flag=0;
	scanf("%d",&n);
	long long s[n];
	for(i=0;i<n;i++) scanf("%I64d",&s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i]%2==0)
		{
			if(s[i]==4) printf("YES\n");
			else printf("NO\n");
		}
		else
		{
			if(s[i]==1) printf("NO\n");
		    else
		    {
		    	long long p=sqrt(s[i]);
		    	if(p*p==s[i])
		    	{
		    		for(j=3;j<=p/2+1;j+=2)
		    		{
		    			if(p%j==0)
		    			{
		    				 flag=1;
		    				 break;
						}
					}
					if(flag==1) printf("NO\n");
					else printf("YES\n");
					flag=0;
				}
			    else printf("NO\n");
			}
		}
	}
}
