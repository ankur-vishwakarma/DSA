 #include<stdio.h>
 main()
 {
 	int n;
 	scanf("%d",&n);
 	int i,s[n],t=0,f=0;
 	for(i=0;i<n;i++)
 	{
 	   scanf("%d",&s[i]);
	}
 	for(i=0;i<n;i++)
 	{
 	   if(s[i]==25) t++;
 	   else if(s[i]==50)
 	   {
 	   	   f++;
           if(t>0)
		   {
		   	  t--;
 		   }
 		   else
 		   {
 		       printf("NO");
				return 0;	
		   }
	   }
 	   else if(s[i]==100)
 	   {
           if(f>0&&t>0)
		   {
		   	  t--,f--;
 		   }
 		   else if(t>=3) t=t-3;
 		   else
 		   {
 		       printf("NO");
				return 0;	
		   }
	   }	 
	}
	printf("YES");
 }
