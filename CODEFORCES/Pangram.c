#include<stdio.h>
main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++) if(s[i]>=65&&s[i]<=90) s[i]=s[i]+32;
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
		}
	}
	for(i=0;s[i]!='\0';i++) if(s[i]!=s[i+1]) count++;
	if(count==26) printf("YES");
	else printf("NO");
}
