#include<stdio.h>
main()
{
	int p,n,i,j;
	scanf("%d%d",&p,&n);
	int s[n][2];
	for(i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
	for(i=0;i<n;i++)
	{
     	for(j=i+1;j<n;j++)
     	{
     		if(s[i][0]>s[j][0])
     		{
     			int temp=s[i][0];
     			s[i][0]=s[j][0];
     			s[j][0]=temp;
     			int tem=s[i][1];
     			s[i][1]=s[j][1];
     			s[j][1]=tem;
			}
		    if(s[i][0]==s[j][0]&&s[j][1]>s[i][1])
			{
				int temp=s[i][0];
     			s[i][0]=s[j][0];
     			s[j][0]=temp;
     			int tem=s[i][1];
     			s[i][1]=s[j][1];
     			s[j][1]=tem;
			}
		 }
	}
	for(i=0;i<n;i++)
	{
		if(p>s[i][0]) p=p+s[i][1];
		else
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}	
