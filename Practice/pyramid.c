#include<stdio.h>
main(){
	int i,j,flag=1;
	for(i=1;i<=4;i++){
		for(j=(4-i);j>0;j--) printf(" ");
		for(j=1;j<=i;j++){
			printf("%d ",flag);
			flag++;
		}
		printf("\n");
	}
}
