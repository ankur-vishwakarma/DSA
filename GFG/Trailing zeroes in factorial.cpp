#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;
		while(n>0) count+=(n/5),n/=5;
		cout<<count<<endl;
	}
}
