#include<bits/stdc++.h>
using namespace std;
main(){
	int n,b;
	cin>>n;
	int s[n]={0};
	for(int i=0;i<n;i++){
		cin>>b;
		if(!s[b]) s[b]=1;
		else{
			cout<<b;
			break;
		}
	}
}
