#include<stdio.h>
#define inf 1000000000
int main()
{
	int T,N,M,i,j,k,t;
	int A[M];
	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
	scanf("%d %d",&N,&M);
	int F[N],P[N],present[N]={0};
	for(i=0;i<N;i++)
	{
		scanf("%d",&F[i]);
		present[F[i]-1]=1;
	}
	for(i=0;i<N;i++)
	{
		scanf("%d",&P[i]);
	}
	for(j=1;j<=M;j++)
	{
		A[j-1]=0;
	 for(i=0;i<N;i++)
	 {
	  if(F[i]==j)
	  {
	  	A[j-1]=A[j-1]+P[i]; 	
	  }	
 	 }
    }
    k=inf;
    //printf("%d\n",k);
	for(i=0;i<M;i++)
	{
		if(present[i]!=0)
		{
		 if(A[i]<k)
		 {
		 	k=A[i];
		 }
	    }
	}
	printf("%d\n",k);
	
}
return 0;
}
