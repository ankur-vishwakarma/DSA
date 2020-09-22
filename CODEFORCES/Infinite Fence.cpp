#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,k;
		cin>>a>>b>>k;
		long long g = __gcd(a, b);
		a /= g;
		b /= g;
		if(a > b)
		swap(a, b);
		if((k - 1) * a + 1 < b) cout << "REBEL";
		else cout << "OBEY";
		cout << endl;
		}
}
