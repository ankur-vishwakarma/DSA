#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int q=n/7,r=n%7;
	if(r==0) cout<<q*2<<" "<<q*2;
	else{
		if(r==1) cout<<q*2<<" "<<q*2+1;
		else if(r<=5) cout<<q*2<<" "<<q*2+2;
		else cout<<q*2+1<<" "<<q*2+2;
	
	}
}
