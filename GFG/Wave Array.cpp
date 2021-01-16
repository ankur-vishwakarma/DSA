#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		for(int i=1;i<n;i+=2){
			//cout<<s[i-1]<<" "<<s[i]<<" "<<s[i+1]<<endl;
			if(s[i-1]<s[i]) swap(s[i],s[i-1]);
			if(s[i+1]<s[i]&&i+1<n) swap(s[i],s[i+1]);
		}
		for(int i=0;i<n;i++) cout<<s[i]<<" ";
		cout<<endl;
	}
}
