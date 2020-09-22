#include<bits/stdc++.h>
using namespace std;
int clearAllBits(int n, int i){
	int k=0,j=0;
	while(i--){
		int b=n&1;
		k+=(b*pow(2,j));
		n=n>>1;
	}
	return k;
}
main(){
	int n,i;
	cin>>n>>i;
	cout<<clearAllBits(n,i);
}

