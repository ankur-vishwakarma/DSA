#include<bits/stdc++.h>
using namespace std;
char out[100];
void subsets(string s,int i,int j){
	//cout<<i<<" "<<j<<" "<<out<<endl;
	if(s[i]=='\0'){
		out[j+1]='\0';
		cout<<out<<endl;
		return;
	}
	out[j]=s[i];
	//cout<<s[i]<<" "<<out[j]<<endl;       
	subsets(s,i+1,j+1);
	//since array is global so need to do backtracking
	//HAD IT BEEN LOCAL THIS WONT BE NEEDED
	out[j]='\0';
	subsets(s,i+1,j);
	
}
main(){
	string s;
	cin>>s;
	subsets(s,0,0);
}
