#include<iostream>
using namespace std;
int topow(int b){
	int a=1;
	for(int i=1;i<=b;i++) a*=2;
	return a;
}
main(){
	int t;
	cin>>t;
	int s[t];
	for(int i=0;i<t;i++) cin>>s[i];
	int sum=0;
	for(int i=0;i<t;i++){
		int su=0;
		for(int j=0;j<s[i];j++)	su=su+topow(j)+(topow(j)*j)/2;
	    cout<<su%1000000007<<"\n";
	}
}
