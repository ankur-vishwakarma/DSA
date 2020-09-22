#include<bits/stdc++.h>
using namespace std;
int tiles(int n){
	if(n<4) return 1;
	else{
		int hzntl=tiles(n-4);
		int vrtcl=tiles(n-1);
		return hzntl+vrtcl;
	}
}
main(){
	int n;
	cin>>n;
	cout<<tiles(n);
}
