#include<iostream>
using namespace std;
int p(int v,int n){
	if(n==1) return v;
	else return v*p(v,n-1);
}
main(){
	int v,n;
	cin>>v>>n;
	cout<<p(v,n);
}
