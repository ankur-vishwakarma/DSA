#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int r=0,p=0,s=0;
		for(int i=0;i<a.length();i++){
			if(a[i]=='R') r++;
			else if(a[i]=='S') s++;
			else p++;
		}
		char print;
		if(p>=r&&p>=s) print='S';
		else if(s>=p&&s>=r) print='R';
		else print='P';
		for(int i=0;i<a.length();i++) cout<<print;
		cout<<endl;
	}
}
