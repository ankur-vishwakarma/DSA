#include<stdio.h>
main()
{
	int n,i,j,s[3],g=0;
	scanf("%d%d%d%d",&n,&s[0],&s[1],&s[2]);
	for(i=0;i<3;i++)
	{
     	for(j=i+1;j<3;j++)
     	{
     		if(s[i]>s[j])
     		{
     			int temp=s[i];
     			s[i]=s[j];
     			s[j]=temp;
			}
	    }
	}
	int a=s[0],b=s[1],c=s[2],p;
	if(n%a==0) g=n/a;
	if(n%b==0&&n/b>g) g=n/b;
	if(n%c==0&&n/c>g) g=n/c;
    for(i=0;i<n/a;i++)
    {
    	p=(n%a+a*i);
    	if(p%b==0) if((n/a-i)+p/b>g) g=(n/a-i)+p/b;
	}
	for(i=0;i<n/b;i++)
	{
		p=(n%b+b*i);
		if(p%c==0) if((n/b-i)+p/c>g) g=(n/b-i)+p/c;
	}
	for(i=0;i<n/a;i++)
	{
		p=(n%a+a*i);
		if(p%c==0) if((n/a-i)+p/c>g) g=(n/a-i)+p/c;
	}
	for(i=0;i<n/a;i++)
	{
		p=(n%a+a*i);
		if(p%(b+c)==0) if((n/a-i)+(p/(b+c)*2)>g) g=(n/a-i)+(p/(b+c))*2;
	}
	for(i=0;i<n/b;i++)
	{
		p=(n%b+b*i);
		if(p%(a+c)==0) if((n/b-i)+(p/(a+c)*2)>g) g=(n/b-i)+(p/(a+c))*2;
	}
	for(i=0;i<n/c;i++)
	{
		p=(n%c+c*i);
		if(p%(a+b)==0) if((n/c-i)+(p/(b+a)*2)>g) g=(n/c-i)+(p/(b+a))*2;
	}
	printf("%d",g);
}

