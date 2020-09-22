#include<stdio.h>
main()
{
	int i,s,m;
	scanf("%d%d",&m,&s);
	int a[m],count=0,p,flag=0;
	a[0]=1;
	for(i=1;i<m;i++) a[i]=0;
	for(i=m-1;i>=0;i--)
	{
		if(i>0) p=1+9*count;
		else p=9*count;
		if(s-p>9) a[i]=9;
		else if(s-p>=0)
		{
			 a[i]=s-p;
			 flag=1;
			 break;
		}
		count++;
	}
	if(flag==1)
	{
		for(i=0;i<m;i++) printf("%d",a[i]);
		printf(" ");
		for(i=0;i<m;i++) a[i]=0;
		p=0,count=0;
        for(i=0;i<m;i++)
        {
        	p=count*9;
        	if(s-p>9)  a[i]=9;
        	else if(s-p>=0)
        	{
        		a[i]=s-p;
        		break;
			}
			count++;
		}
		for(i=0;i<m;i++) printf("%d",a[i]);
	}
	else printf("-1 -1");
	
}
