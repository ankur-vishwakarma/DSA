#include<stdio.h>
#include<string.h>
static int i=6;

/*main(){
	int j;
	static int i=5;
	for(j=0;j<5;j++) printf("%d ",i);
    printf("\n%d ",i);
}*/

/*main(){
	int h=3,n=10;
	int *p=&h;
	while(*p++){
		n=*p > h-1 ? (*p, n-1 >>2) ? (*p--) : *p - h : ++
	}
}*/
/*int f(){
	char a[20]="aaa";
	char b[20]="bb";
	strcat(a,b);
	return a;
}*/
main(){
	typedef struct {
		int a;
		int b;
	}tag;
	
	struct tag{
		int a;
		int b;
	};
	tag tag_a;
	struct tag_b;
}
