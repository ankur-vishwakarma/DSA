#include<stdio.h>
main(){
	long r1,r2,r3,n1;
	scanf("%ld %ld %ld %ld",&r1,&r2,&r3,&n1);
	long n2=(r1*n1)/r2;
	long n3=(r2*n2)/r3;
	printf("%ld",n3);
}
