#include<bits/stdc++.h>
using namespace std;
main(){
	int T;
	cin>>T;
	while(T--){
		int h,c,t;
		cin>>h>>c>>t;
		if(t<=(h+c)/2){
			cout<<"2\n";
			continue;
		}
		int k=(h-t)/(2*t-h-c);
		if(abs((k*(h+c)+h)-t*(2*k+1))*(2*k+3)<=abs(((k+1)*(h+c)+h)-t*(2*k+3))* (2*k+1)) cout<<2*k+1<<endl;
		else cout<<2*(k+1)+1<<endl;
	}
}
