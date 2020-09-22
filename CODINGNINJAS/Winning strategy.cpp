#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int flag=0,total=0;
	for(int i=0;i<n;i++){
		if(abs(s[i]-(i+1))>2){
			flag=1;
			break;
		}
		total+=(abs(s[i]-(i+1)));
	}
	if(flag) cout<<"NO";
	else cout<<"YES\n"<<total;
}
