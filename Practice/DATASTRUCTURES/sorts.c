#include<stdio.h>
/*void selection(int s[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i]>s[j]){
				int temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("selection sort:\n");
	for(i=0;i<n;i++) printf("%d ",s[i]);
	printf("\n");
}*/
void insertion(int s[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int min=s[i],flag=i;
		for(j=i+1;j<n;j++) if(s[j]<min){
			 min=s[j];
			 flag=j;
		}
		for(j=flag;j>i;j--){
			int temp=s[j];
			s[j]=s[j-1];
			s[j-1]=temp;
		}
	}
	printf("insertion sort:\n");
	for(i=0;i<n;i++) printf("%d ",s[i]);
	printf("\n");
}
/*void bubble(int s[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(s[j]>s[j+1]){
			int temp=s[j+1];
			s[j+1]=s[j];
			s[j]=temp;
		}
		}
	}
	printf("bubble sort:\n");
	for(i=0;i<n;i++) printf("%d ",s[i]);
	printf("\n");
}
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
}*/
main(){
	int i,n;
	printf("enter no of elements of array");
	scanf("%d",&n);
	int s[n];
	printf("\nenter elements\n");
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	//selection(s,n);
	insertion(s,n);
	//bubble(s,n);
	//heapsort(s,n);
}
