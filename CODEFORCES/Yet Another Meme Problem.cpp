#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long c=b,digits=0;
		while(c!=0) digits++,c/=10;
		//if all 9
		c=b;
		int flag=0;
		while(c!=0){
			if(c%10!=9){
				flag=1;
				break;
			}
			c/=10;
		}
		if(flag==0) digits++;
		cout<<a*(digits-1)<<endl;
	}
}
