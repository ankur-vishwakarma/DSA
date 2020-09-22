#include<bits/stdc++.h>
using namespace std;
void print(int n){
	//base case
	if(n==0) return;
	//recursive case
	//n--;
	print(n-1);
	cout<<n<<" ";
	return;
}
main(){
	int n;
	cin>>n;
	print(n);
}
