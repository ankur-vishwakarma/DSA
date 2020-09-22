#include<stdio.h>
int partition(int s[],int beg,int end){
	int left=beg,loc=beg,right=end,flag=0;
	printf("bl%dl %dr %dp\n",left,right,loc);
	while(left!=loc||right!=loc){
		printf("%dl %dr %dp\n",left,right,loc);
		if(flag==0){
		if(s[loc]>s[right]){
			int temp=s[loc];
			s[loc]=s[right];
			s[right]=temp;
			flag=1;
			loc=right;
		}
		else right--;
	}
	else{
		if(s[loc]<s[left]){
			int temp=s[loc];
			s[loc]=s[left];
			s[left]=temp;
			flag=0;
			loc=left;
		}
		else left++;
	}
	}
	return loc;
}
void quicksort(int s[],int beg,int end){
	int loc;
	if(beg<end){
		printf("%db %de %dm\n",beg,end,loc);
		loc=partition(s,beg,end);
		quicksort(s,beg,loc-1);
		quicksort(s,loc+1,end);
	}
}
main(){
	int i,n;
	printf("enter no of elements of array");
	scanf("%d",&n);
	int s[n];
	printf("\nenter elements\n");
	for(i=0;i<n;i++) scanf("%d",&s[i]);
	quicksort(s,0,n-1);
	for(i=0;i<n;i++) printf("%d ",s[i]);
}
