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
	if(t-o==0) count=count+t;
	else if(t>o) count=count+o+(t-o);
	else if(o>t) 
	{
		count=count+t;
		to=to+(o-t)/2;
	}
		if(to%2==0) count=count+(to/2);
    	else if(to/2>0) count=count+(to/2)+1;
	if((o-t)==1||to==1) count++;
	printf("%d",count);
}
