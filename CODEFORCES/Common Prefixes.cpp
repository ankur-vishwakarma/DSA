#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int count=0;
	while(t--){
		int n;
		cin>>n;
		int s[n+1];
		s[0]=0;
		for(int i=1;i<=n;i++) cin>>s[i];
		string a="abcdefghijklmnopqrstuvwxabcdefghijklmnopqrstuvwxabcdefghijklmnopqrstuvwx";
		//string b="abcdefghijklmnopqrstuvwxabcdefghijklmnopqrstuvwx";
		//string k[n+1];
		//k[0]=a;
		cout<<a<<endl;
		//char diff='y';
		for(int i=1;i<=n;i++){
			//cout<<(a[s[i]]+1)%26<<endl;
			int l=a[s[i]]+1;
			if(l>122) l=97;
			a[s[i]]=(char)(l);
			cout<<a<<endl;
			//(diff=='y')?diff='z':diff='y';
		}
	}
}
