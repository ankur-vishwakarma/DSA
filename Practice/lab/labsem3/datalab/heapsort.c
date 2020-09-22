#include<stdio.h>
void heapsort(int s[],int n){
	int i,j,k;
	while(k<n){
		for(i=0;2*i+2<n;i++){
		for(j=2*i+1;j<=2*i+2;j++){
			if(s[i]>s[j]){
				int temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	k++;
	}
	printf("heap sort:\n");
	for(i=0;i<n;i++) printf("%d ",s[i]);
	printf("\n");
}
main(){
	int i,n;
	printf("enter no of elements of array");
	scanf("%d",&n);
	int s[n];
	printf("\nenter elements\n");
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	heapsort(s,n);
}
