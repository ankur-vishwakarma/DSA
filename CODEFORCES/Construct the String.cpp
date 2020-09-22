#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int flag=0;
		for(int i=0;i<n;i++){
			cout<<(char)('a'+flag);
			flag++;
			if(flag==b) flag=0;
		}
		cout<<endl;
	}
}
