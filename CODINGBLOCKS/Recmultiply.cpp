#include<bits/stdc++.h>
using namespace std;
int mul(int a,int b){
	if(b==0) return 0;
	else if(b==1) return a;
	else return a+mul(a,b-1);
}
int mod(int n){
	if(n<0) return -n;
	else return n;
}
main(){
	int a,b,c;
	cin>>a>>b;
	if(mod(a)<mod(b)) c=mul(mod(b),mod(a));
	else c=mul(mod(a),mod(b));
	if((a>0&&b>0)||(a<0&&b<0)) cout<<c;
	else cout<<-c;
}
