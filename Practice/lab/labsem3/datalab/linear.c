#include<stdio.h>
void linear(int a[],int n,int p){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==p){
			printf("LINEAR SEARCH-element is found at %dth location\n",i+1);
			return;
		} 
	}
	printf("LINEAR SEARCH-element not found\n");
}
void binary(int a[],int start,int end,int p){
	int mid=(start+end)/2;
	if(start==end) printf("BINARY SEARCH-not found");
	else{
		if(a[mid]==p) printf("BINARY SEARCH-element found at %dth position",mid+1);
	else if(p<a[mid]) binary(a,start,mid, p);
	else binary(a,mid+1,end,p);
	}
}
main(){
	int j,n,i;
	printf("Enter no of elements in array:\n");
	scanf("%d",&n);
	int s[n],p;
	printf("Enter elements:\n");
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	printf("Enter value u wnt to linear search:\n");
	scanf("%d",&p);
	linear(s,n,p);
	//SORTING ARRAY
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i]>s[j]){
				int temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Enter value u wnt to binary search:\n");
	scanf("%d",&p);
	binary(s,0,n-1,p);
}
