#include<stdio.h>
main()
{
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	int s[a+b],i=0,count=0;
	if(x%2!=0)
	{
		while((x+1)!=0)
		{
			s[i]=1,s[i+1]=0;
			i+=2;
			x=x-2;
			a--;
			b--;
			count+=2;
		}
		while(b!=0)
		{
			printf("1");
			b--;
		}
		for(i=0;i<count;i++) printf("%d",s[i]);
		while(a!=0)
		{
			printf("0");
			a--;
		}
	}
	else
	{
		if(a>=b)
		{
		    while(x!=0)
		{
			s[i]=0,s[i+1]=1;
			i+=2;
			x=x-2;
			a--;
			b--;
			count+=2;
		}	
			while(a!=1)
		{
			printf("0");
			a--;
		}
		for(i=0;i<count;i++) printf("%d",s[i]);
		    while(b!=0)
		{
			printf("1");
			b--;
		} 
		printf("0");
		}
		else
		{
			while(x!=0)
		{
			s[i]=1,s[i+1]=0;
			i+=2;
			x=x-2;
			a--;
			b--;
			count+=2;
		}	
		 while(b!=1)
		{
			printf("1");
			b--;
		} 
			for(i=0;i<count;i++) printf("%d",s[i]);
				while(a!=0)
		{
			printf("0");
			a--;
		}
		printf("1");
		}
	}
}
