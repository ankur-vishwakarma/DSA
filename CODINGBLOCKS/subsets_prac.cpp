#include<bits/stdc++.h>
using namespace std;
//string s[10]={"\0","\0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string a;
void subsets(string s,int i){
	cout<<i<<"beg"<<endl;
	//BASE CASE
	if(s[i]=='\0'){
		 cout<<a<<"ans\n";
		 return;
	}
	//RECURSIVE
	//once we ignore the current char
	a[i]='\0';
	cout<<a<<" "<<i<<endl;
	subsets(s,i+1);
	a[i]=s[i];
	cout<<a<<" "<<i<<endl;
	subsets(s,i+1);
}
main(){
	string s;
	cin>>s;
	subsets(s,0);
}
