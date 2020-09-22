#include<stdio.h>
#include<string.h>
main()
{
	char s[1001],t[340];
	gets(s);
	int j,i,count=0,l=strlen(s);
	for(i=1,j=0;i<l-1;i+=3,j++) t[j]=s[i];
	t[j]='\0';
    for(i=0;t[i]!='\0';i++)
	{
		for(j=i+1;t[j]!='\0';j++)
		{
			if(t[i]>t[j])
			{
				int temp=t[i];
				t[i]=t[j];
				t[j]=temp;	
			}
		}
	}
	for(i=0;t[i]!='\0';i++) if(t[i]!=t[i+1]) count++;
    printf("%d",count);
}
