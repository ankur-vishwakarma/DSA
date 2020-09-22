#include<stdio.h>
int main()
{
	long n,a,i,k=0;
	scanf("%ld%ld",&n,&a);
	long s[n],t[n][2];
	for(i=0;i<(n-1);i++) scanf("%ld",&s[i]);
	for(i=0;i<(n-1);i++)
	{
		t[i][0]=i+1;
		t[i][1]=i+1+s[i];
	}
	if(t[0][1]==a)
	{
		printf("YES");
			return 0;
	}
	for(i=1;i<(n-1);i++)
	{
		if(t[k][1]==t[i][0])
		{
			if(t[i][1]==a)
			{
			printf("YES");
			return 0;	
			}
			else k=i;
		}
	}
	printf("NO");
}

