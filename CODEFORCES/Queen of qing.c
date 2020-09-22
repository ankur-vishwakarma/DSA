#include<stdio.h>
#include<string.h>
main()
{
	long q,l[100001],i,j,p,c,z,flag=0,count=0,len=0;
	int k;
	char s[1100001],str[200001];
	l[0]=0;
	scanf("%ld",&q);
	
	for(i=1;i<=q;i++)
	{
		scanf("%ld",&l[i]);
		scanf("%s",str);
		strcat(s,str);
	}
	for(p=0;p<q;p++)
	{
		len=len+l[p];
	  for(z=0;z<200000;z++) str[z]='\0';
	  for(z=0;z<l[p+1];z++) str[z]=s[z+len];
		for(k=1;k<=2;k++)
		{
			if(k==1)
			{
				i=0;
				j=l[p+1]-1;
				c=l[p+1]/4;
			}
			else if(k==2)
			{
			    i=l[p+1]/4;
				j=l[p+1]-1-l[p+1]/4;
				c=l[p+1]/2;	
			}
			for(;i<c;i++)
			{
				for(;j>l[p+1]-1-c;j--)
				{
					if(str[i]==str[j]) str[j]='1';
					else flag++;
				}
				if(flag==l[p+1]/4) count++;
				flag=0;
			}
		flag=0;	
		}
		if(count>0) printf("NO %d\n",count);
		else printf("YES\n");
		count=0;
	}
}
