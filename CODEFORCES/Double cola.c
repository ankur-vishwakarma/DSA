#include<stdio.h>
#include<math.h>
main()
{
	long d,n,count=0;
	scanf("%ld",&d);
	for(n=1;n<=d/5;n=2*n+1) count++;
	n=(n-1)/2;
	long fc=pow(2,count);
	if(d>(5*n)&&d<=((5*n)+fc)) printf("Sheldon");
	else if(d>(6*n+1)&&d<=((6*n+1)+fc)) printf("Leonard");
	else if(d>(7*n+2)&&d<=((7*n+2)+fc)) printf("Penny");
	else if(d>(8*n+3)&&d<=((8*n+3)+fc)) printf("Rajesh");
	else  printf("Howard");
}
