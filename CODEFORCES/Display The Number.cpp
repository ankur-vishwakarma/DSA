#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<2) cout<<"0\n";
		else if(n==2) cout<<"1\n";
		else if(n==3) cout<<"7\n";
		else if(n==4) cout<<"11\n";
		else{
			int nines=0,sevens=0,ones=0;
			if(n%2==0){
				ones=n/2;
				for(int i=1;i<=ones;i++) cout<<"1";
				cout<<endl;
			}
			else{
				cout<<7;
				n-=3;
				ones=n/2;
				for(int i=1;i<=ones;i++) cout<<"1";
				cout<<endl;
			}
		}
	}
}
/*nines=n/6;
			n=n%6;
			sevens=n/3;
			n=n%3;
			
			for(int i=1;i<=nines;i++) cout<<"9";
			for(int i=1;i<=sevens;i++) cout<<"7";*/
