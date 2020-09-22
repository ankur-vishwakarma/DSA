#include<iostream>
using namespace std;
main(){
	int a,b;
	cin>>a>>b;
	int x=0,y=0,z=0;
	for(int i=1;i<=6;i++){
		int p=a-i,k=b-i;
		if(p<0) p=-p;
		if(k<0) k=-k;
		if(p<k) x++;
		else if(p==k) y++;
		else z++;
	}
	cout<<x<<" "<<y<<" "<<z;
}
