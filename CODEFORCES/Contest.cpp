#include<iostream>
using namespace std;
int max(int l,int f){
	if(l>f) return l;
	else return f;
}
main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int k=3*a/10,p=a-(a/250)*c;
	int pm=max(k,p);
	k=3*b/10,p=b-(b/250)*d;
	int pv=max(k,p);
	if(pm>pv) cout<<"Misha";
	else if(pv>pm) cout<<"Vasya";
	else cout<<"Tie";
}
