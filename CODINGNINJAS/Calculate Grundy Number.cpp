#include<bits/stdc++.h>
using namespace std;
int grundy(int n){
	//cout<<n<<" ";
	if(n==0) return 0;
    int a=grundy(n/2);
	int b=grundy(n/3);
	int c=grundy(n/6);
	int g;
	for(int i=0;i<=n+1;i++){
		if(i!=a&&i!=b&&i!=c){
			g=i;
			break;
		}
	}
	//cout<<n<<" "<<g<<endl;
	return g;
}
main(){
	int n;
	cin>>n;
	cout<<grundy(n);
}
