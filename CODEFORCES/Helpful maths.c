#include<stdio.h>
#include<string.h>
main()
{
	char s[101];
	scanf("%s",s);
	int i,j,l=strlen(s);
	for(i=0;i<l;i+=2)
	{
		for(j=i+2;j<l;j+=2)
		{
			if(s[i]>s[j])
			{
		    int temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			}
		
		}
	}
	printf("%s",s);
}
