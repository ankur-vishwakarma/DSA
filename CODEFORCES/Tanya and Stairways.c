#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s[n],i,count=1,t[n],j=0,flag=1;
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	for(i=0;i<n-1;i++)
    {
    	if(s[i+1]>s[i])
    	{
    		 count++;
		}
    	else
		{
			t[j]=count;
			count=1;
			j++;
			flag++;
		}
	}
	t[j]=count;
	printf("%d\n",flag);
	for(i=0;i<flag;i++) printf("%d ",t[i]);
}
