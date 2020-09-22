#include<iostream>
using namespace std;
void fib(int n){
	int curr=1,pre=0,count=0;
	while(count<n){
		cout<<curr<<" ";
		curr=curr+pre;
		pre=curr-pre;
		count++;
	}
}
int fibrec(int n){
	int p;
	if(n<=0) return 0;
	else if(n==1) return 1;
	else return fibrec(n-2)+fibrec(n-1);
}
main(){
	int n,i=1;
	cin>>n;
	
	while(i<=n){
		cout<<fibrec(i)<<" ";
		i++;
	}
}
