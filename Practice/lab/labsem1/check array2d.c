#include <stdio.h>
main()
{
	int s[3][2]={12,13,14,67,6,71};
	printf("%d\n",s[1][0]);
	printf("%d\n",*(s[1]+1));
	printf("%d",*((s+1)+1));
}
