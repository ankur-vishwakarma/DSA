#include <stdio.h>
main()
{
	int p=0,n=0,z=0,k,s,o,a;
    do{
	printf("enter the no");
	scanf("%d",&k);
	scanf("%c",&a);
    if(k==0) z=z+1;
	if(k<0) n=n+1;
	if(k>0) p=p+1;
	printf("enter Y to count your enterd no sign");
	scanf("%c",&a);
	scanf("%c",&o);
    }while(a=='Y'||a=='y');
    printf("no of positive no=%d\n no of negative no=%d\n no of zeroes=%d",p,n,z);
}
