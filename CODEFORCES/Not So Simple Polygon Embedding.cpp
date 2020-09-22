#include<bits/stdc++.h>
using namespace std; 
main(){
	int t;
	cin>>t;
	while(t--){
		float n;
		cin>>n;
 		cout << std::fixed;
		cout<<setprecision(9)<<cos(acos(-1.0) / (4*n))/sin(acos(-1.0) / (2*n))<<endl;
	}
}
