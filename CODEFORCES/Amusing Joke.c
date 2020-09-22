#include<stdio.h>
#include<string.h>
main()
{
	char s[201],t[101],z[101];
	scanf("%s%s%s",s,t,z);
	int ls=strlen(s),lt=strlen(t),lz=strlen(z);
	if(lz!=(ls+lt))
	{
		printf("NO");
		return 0;
	}
	strcat(s,t);
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
		 if(s[i]>s[j])
			   {
			   		int temp=s[i];
				    s[i]=s[j];
				    s[j]=temp;
			   }
		if(z[i]>z[j])
			   {
			   		int tempq=z[i];
				    z[i]=z[j];
				    z[j]=tempq;
			   }
		}
	}
	for(i=0;s[i]!='\0';i++)
		{
			if(s[i]!=z[i])
			{
				printf("NO");
		        return 0;	
			}
		}
			printf("YES");
}
