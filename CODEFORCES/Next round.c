#include <stdio.h>
main()
{
	int k,n,i,score[100],p;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&score[i]);
	if(k>=1&&n>=k&&n<=50)
	{
		if(score[k-1]>0)
		{
			p=k;
			for(i=k;i<n;i++)
			{
				if(score[k-1]<=score[i]) p=p+1;
			}
			printf("%d",p);
		}
		else
		{
			p=0;
				for(i=0;i<k-1;i++)
		{
			if(score[i]>0) p=p+1;
			else break; 
		}
		printf("%d",p);
		}
	
	}
}
