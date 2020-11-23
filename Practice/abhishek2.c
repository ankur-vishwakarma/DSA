#include<stdio.h>

#define gun

#define L 10
int main(void){
	/*int i=100,j=200;
	const int *ptr=&i;
	printf("%d ",ptr);
	*ptr=1000;
	ptr=&j;
	printf("%d ",ptr);*/
	
	/*#ifdef gun
		printf("mock");
	#else
		printf("tech");
	#endif	*/
	
	auto m=10;
	switch(m,m*2){
		case L: printf("Wi ");
			break;
		case L*2: printf("Wa ");
			break;
		default: printf("L ");
		case L*4: printf("I ");
			break;
	}
	
}
