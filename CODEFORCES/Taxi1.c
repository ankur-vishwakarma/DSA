#include<stdio.h>
main()
{
	int s[10001],count=0,i,t=0,to=0,o=0;
	long int n;
	scanf("%ld",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==4) count++;
		else if(s[i]==3) t++;
		else if(s[i]==2) to++;
		else if(s[i]==1) o++;
	}
	if(t-o==0){
		 count=count+t;
		 o=0;
	}
	else if(t>o){
		 count=count+o+(t-o);
		 o=0;
	}
	else if(o>t) 
	{
		count=count+t;
		o=o-t;
    }
    if(to%2==0)
    {
    	count=count+to/2;
    	if(o%4==0) count=count+o/4;
    	else count=count+o/4+1;
	}
	else
	{
		count=count+to/2;
		if(o<=2) count=count+1;	
		else
		{
			count=count+1;
			o=o-2;
			if(o>0&&o%4==0) count=count+o/4;
    	    else count=count+o/4+1;
		}
	}
	printf("%d",count);
}
