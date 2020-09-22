#include<iostream>
using namespace std;
main(){
	int y,b,r;
	cin>>y>>b>>r;
	int y1=y+2,b1=b+1,s;
	if(y1<=b1&&y1<=r) s=y+y+2+y+1;
	else if(b1<=y1&&b1<=r) s=3*b;
	else s=r+r-1+r-2;
    cout<<s;
}
