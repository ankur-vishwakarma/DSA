#include<bits/stdc++.h>
using namespace std;
void print(int i,int j,int n){
	if(i>n) return;
	if(j<i){
		cout<<"*";
		print(i,j+1,n);
		return;
	}
	cout<<endl;
	print(i+1,0,n);
}
main(){
	int n;
	cin>>n;
	print(0,0,n);
}
