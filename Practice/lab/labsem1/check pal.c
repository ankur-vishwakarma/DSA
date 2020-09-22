#include <stdio.h>
#include<string.h>
#define SIZE 100
main()
{
	int i,length,k=0;
	char array[SIZE];
    printf("enter the word");
    gets(array);
    length=strlen(array);
	for(i=0;i<=(length/2);i++)
	{
		if(array[i]!=array[length-(i+1)])
		{
			printf("%d",length);
			printf("%c",array[length-(i+1)]);
			printf("WORD ENTERED IS NOT A PALINDROME");
			k=1;
			break;
		}
	}
	if(k!=1) printf("WORD ENTERED IS A PALINDROME");
}
