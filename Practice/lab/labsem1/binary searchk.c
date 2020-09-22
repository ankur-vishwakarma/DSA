#include <stdio.h>
main()
{
	int i,j,mark[10],start=0,end=9,mid=(start+end)/2,k=0;
		for(i=0;i<10;i++)
	{
		printf("entr %d th element",i+1);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(mark[i]>mark[j])
			{
				int temp=mark[i];
				mark[i]=mark[j];
				mark[j]=temp;
			}
		}
		printf("%d  ",mark[i]);
    }
    int n;
    printf("enter the no");
    scanf("%d",&n);
    do
    {
    	if(n<mark[mid])
    	{
    		end=mid;
    		mid=(start+end)/2;
		}
		if(n>mark[mid])
		{
			start=mid;
			mid=(start+end)/2;
		}
		if(n==mark[mid])
		{
			printf("no is found at mark[%d]",mid);
			k=1;
		}
	}while(k!=1||mid!=start||mid!=end);
	if(k!=1) printf("number nt  found");
}
