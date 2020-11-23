#include<stdio.h>
//#define A(arr) (sizeof(arr)/sizeof(arr[0]))
main(){
	/*int i;
	int arr[]={1,2,3,4,5};
	printf("j ");
	for(i=-1;i<A(arr)-1;++i) printf("%d ",arr[i+1]);*/
	int x=4,y=2;
	int r=x^((x^y)&-(x>y));
	printf("%d ",r);
	r=y^((x^y)&-(x>y));
	printf("%d ",r);
	r=x-((x-y)&((x-y)>>(sizeof(int) * CHAR_BIT-1)));
	printf("%d ",r);
}
