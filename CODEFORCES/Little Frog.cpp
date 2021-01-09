#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int i=1;
	while(n>=i){
		if(n==i){
			cout<<i;
			break;
		}
		cout<<i<<" "<<n<<" ";
		i++,n--;
	}
}
