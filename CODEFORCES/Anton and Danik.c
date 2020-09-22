#include<stdio.h>
main()
{
	long int n,i,d=0,a=0;
	scanf("%ld",&n);
	char s[n+1];
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='D') d++;
		else if(s[i]=='A') a++;
	}
	if(a>d) printf("Anton");
	else if(d>a) printf("Danik");
	else if(a==d) printf("Friendship");
}
