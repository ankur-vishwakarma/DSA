#include<stdio.h>
main()
{
	char s[101];
	int count=0,flag=0,i,j;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
				char temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
    for(i=0;s[i]!='\0';i++)
	{
			j=i+1;
		if(s[i]==s[j]) flag=1;
		if(flag!=1) count++;
		flag=0;
	}
	if(count%2==0) printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
}
