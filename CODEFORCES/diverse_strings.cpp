#include<iostream>
#include<string>
using namespace std;
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		for(int k=0;s[i][k]!='\0';k++){
			for(int l=k+1;s[i][l]!='\0';l++){
				if(s[i][k]>s[i][l]){
					char temp=s[i][k];
					s[i][k]=s[i][l];
					s[i][l]=temp;}}}
		int f=s[i][0],flag=0;
		for(int j=0;s[i][j]!='\0';j++){
			if(s[i][j]!=f){
				cout<<"NO\n";
				flag=1;
				break;
			}
			f++;
		}
		if(flag==0) cout<<"YES\n";
	}}


