#include<stdio.h>
main()
{
	int n,i,j,s[3];
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
	int a=s[0],b=s[1],c=s[2];
	if(n%a==0) printf("%d",n/a);
	else
	{
		if(n%b==0) printf("%d",n/b);
		else
		{
			if((n%b)%a==0) printf("%d",n/b+(n%b)/a);
			else
			{
				if(n%c==0) printf("%d",n/c);
				else
				{
					if((n%c)%a==0) printf("%d",n/c+(n%c)/a);
					else if((n%c)%b==0) printf("%d",n/c+(n%c)/b);
					else if((n%c)%(a+b)==0) printf("%d",n/c+((n%c)/(a+b))*2);
				}
			}
		}
	}
}
