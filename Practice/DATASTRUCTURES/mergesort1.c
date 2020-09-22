#include<stdio.h>
void mergesort(int s[],int start,int end){
	int mid,i;
	if(start<end){
		int mid=(start+end)/2;
		mergesort(s,start,mid);
		mergesort(s,mid+1,end);
		merge(s,start,mid,end);
	}
	
}
void merge(int s[],int mid,int start,int end){
	//int mid=(start+end)/2;
	int i=start,j=mid+1,k=0,temp[end-start+1];
	while(i<=mid&&j<=end){
		if(s[i]<s[j]){
			temp[k]=s[i];
			i++;
			k++;
		}
		else{
			temp[k]=s[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		 while(j<=end){
		temp[k]=s[j];
		k++,j++;
	}
	}
	else {
		 while(i<=mid){
		temp[k]=s[i];
		k++,i++;
	}
	}
	for(i=start,k=0;i<=end;i++,k++) s[i]=temp[k];
}
main(){
		int i,n;
	printf("enter no of elements of array");
	scanf("%d",&n);
	int s[n];
	printf("\nenter elements\n");
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	mergesort(s,0,n-1);
	printf("merge sort:\n");
	for(i=0;i<n;i++) printf("%d ",s[i]);
	printf("\n");
}
