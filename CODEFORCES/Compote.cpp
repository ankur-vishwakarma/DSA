#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cin>>a>>b>>c;
	int p=1,q=2,r=4,count=0;
	while(a%p>0&&b%q>0&&c%r>0){
		 count++;
	}
	int sum=count*7;
	cout<<sum;
}
