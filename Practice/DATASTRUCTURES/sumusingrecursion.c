#include<stdio.h>
int sum(int n){
	if(n==1) return 1;
	else return n+sum(n-1);
}
main(){
	int n;
	scanf("%d",&n);
	int ans=sum(n);
	printf("%d",ans);
}
