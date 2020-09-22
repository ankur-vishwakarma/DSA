#include<stdio.h>
main(){
	int i,j,flag=0;
	for(i=1;i<=5;i++){
		if(i%2!=0) flag=1;
		for(j=0;j<i;j++){
			printf("%d ",flag);
			if(flag==1) flag=0;
			else flag=1;
		}
		printf("\n");
	}
}
