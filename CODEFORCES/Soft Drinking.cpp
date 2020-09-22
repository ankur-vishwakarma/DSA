#include<iostream>
using namespace std;
main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink=k*l,lime=c*d;
	int dr=k*l/nl,salt=p/np;
	if(dr>=n&&salt>=n&&lime>=n){
		if(dr<=salt&&dr<=lime) cout<<dr/n;
		else if(salt<=dr&&salt<=lime) cout<<salt/n;
		else cout<<lime/n;
		return 0;
	}
	cout<<"0";
}
