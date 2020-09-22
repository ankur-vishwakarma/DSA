#include<iostream>
#include<string>
using namespace std;
main(){
	string s;
	cin>>s;
	int l=0, hold,flag,c=0,d=0;
	for(int i=0;s[i]!='\0';i++) l++;
	for(int i=0,j=l-1;i!=j&&j!=i-1;i++,j--){
		if(s[i]!=s[j]) c++;
		if(c==2) break; 
	}
	if(c==0&&l%2!=0) cout<<"YES";
	else if(c==1) cout<<"YES";
	else cout<<"NO";
}
