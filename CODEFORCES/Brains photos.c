#include<stdio.h>
main()
{
	int m,n,i,j,flag=0;
	scanf("%d%d",&m,&n);
	getchar();
	char s[m][n+1];
	for(i=0;i<m;i++)
	{
        for(j=0;j<n;j++)
        {
        	scanf("%c\n",&s[i][j]);
		}
	}  
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
        {
        	 if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y')
        	 {
        	 	  printf("#Color");
        	 	  return 0;
			 }
		}
	}
		printf("#Black&White");
}
