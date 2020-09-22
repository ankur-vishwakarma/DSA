#include<iostream>
using namespace std;
void oct(int n){
	if(n/8==0) cout<<n<<" ";
	else{
		oct(n/8);
		cout<<n%8<<" ";
	}
}
main(){
	int n;
	cin>>n;
	oct(n);
}
