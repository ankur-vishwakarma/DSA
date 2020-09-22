 #include<stdio.h>
 main()
 {
 	int n;
 	scanf("%d",&n);
 	int i,j,s[n][n];
 	for(i=0;i<n;i++) s[0][i]=1;
 	for(i=0;i<n;i++) s[i][0]=1;
 	for(i=1;i<n;i++) for(j=1;j<n;j++) s[i][j]=s[i][j-1]+s[i-1][j];
 	printf("%d",s[n-1][n-1]);
 }
