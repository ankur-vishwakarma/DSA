#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	long long s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	long long cs=0,ms=0,ns=0,max=INT_MIN;
	for(int i=0;i<n;i++){
		cs+=s[i];
		if(cs<0) cs=0,max=INT_MIN;
		if(cs>ms){
			ms=cs;
			if(s[i]>max) max=s[i];
			if(ms-max>ns) ns=ms-max;
		}
	}
	cout<<ns;
}
