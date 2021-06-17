#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		string a,b;
		cin>>n>>a>>b;
		int na=0,nb=0;
		for(int i=0;i<n;i++){
			if(a[i]-'0'>b[i]-'0') na++;
			else if(a[i]-'0'<b[i]-'0') nb++;
		}
		if(na==nb) cout<<"EQUAL\n";
		else if(na>nb) cout<<"RED\n";
		else cout<<"BLUE\n";
	}

}
