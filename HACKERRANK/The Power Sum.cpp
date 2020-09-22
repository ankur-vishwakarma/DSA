#include<iostream>
#include<cmath>
using namespace std;
int flag=0,count=0;
void s(int x,int n,int h){
	if(x==0) return;
	else{
		int p=pow(x,n)+pow(flag,n);
	cout<<"p="<<p<<"x"<<x<<"f"<<flag<<'\n';
	if(flag<x){
		if(p==h) count++;
		flag++;
		 s(x,n,h);
	}
	else{
			flag=0;
			s(x-1,n,h);
	}
	}
}
main(){
	int x,n;
	cin>>x>>n;
	s(x,n,x);
	cout<<count;
}
