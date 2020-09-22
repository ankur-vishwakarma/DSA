#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(b==a) cout<<"YES";
	else if(c==0) cout<<"NO";
	else{
		if((b-a)%c==0&&(b-a)/c>0) cout<<"YES";
	    else cout<<"NO";
	}
}
