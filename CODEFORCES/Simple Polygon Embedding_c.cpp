#include<bits/stdc++.h>
using namespace std; 
main(){
	int t;
	cin>>t;
	while(t--){
		float n;
		cin>>n;
 		cout << std::fixed;
		cout<<setprecision(9)<<1/tan((90/n)*(2*acos(0.0) / 180))<<endl;
	}
}
