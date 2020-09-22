#include<stdio.h>
int main()
{
	int i,flag=0;
	char t[1][2],h[5][5];
	scanf("%s",&t[0]);
	for(i=0;i<5;i++)
	scanf("%s",&h[i]);
	for(i=0;i<5;i++)
	{
		if((h[i][0]==t[0][0]) ||h[i][1]==t[0][1]) flag=1;
	}
	if(flag!=0)
	printf("YES");
	else
	printf("NO");
}
