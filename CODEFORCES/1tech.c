#include<stdio.h>
main()
{
    int n,k;
    scanf("%d",&n);
	int i,j,s[n][3];
	for(i=0;i<n;i++) for(j=0;j<3;j++) scanf("%d",&s[i][j]);
	for(i=0;i<n;i++)
	{
		int str[s[i][2]+1];
		for(j=0;j<(s[i][2]+1)/2;j++) str[j]=s[i][0]*(j+1);
		k=1;
		for(j=(s[i][2]+1)/2;j<(s[i][2]+1);j++)
		{
			
			str[j]=s[i][1]*k;
			k++;
		}
		for(k=0;k<(s[i][2]+1);k++)
		{
	
			for(j=k+1;j<(s[i][2]+1);j++)
			{
				if(str[k]>str[j])
				{
					int temp=str[k];
					str[k]=str[j];
					str[j]=temp;
				}
			}
		}

	printf("%d\n",str[s[i][2]-1]);
	}
}
