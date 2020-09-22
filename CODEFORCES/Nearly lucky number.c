#include <stdio.h>
main()
{
	long long n;
	scanf("%I64d",&n);
	int count=0;
	do{
		if(n%10==4||n%10==7) count++;
		n=n/10;
	}while(n/10!=0||n%10==4||n%10==7);
	if(count==7||count==4) printf("YES");
	else printf("NO");	
}
