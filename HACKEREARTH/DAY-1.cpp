#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int f=0,b=0;
	for(int i=0;i<n;i++){
		if(s[i]>k) break;
		f++;
	}
	for(int i=n-1;i>=0&&i>f;i--){
		if(s[i]>k) break;
		b++;
	}
	cout<<n-(f+b);
}
