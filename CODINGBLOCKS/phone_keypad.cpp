#include<bits/stdc++.h>
using namespace std;
string reff[9]={"\0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char out[100];
void combi(string s,int i,int j,int n){
	//cout<<i<<" "<<j<<" "<<n<<endl;
	if(i==n){
		//cout<<"base\n";
		out[i+1]='\0';
		cout<<out<<endl;
		return;
	}
	if(reff[s[i]-'0'][j]=='\0') return;
	out[i]=reff[s[i]-'0'][j];
	//cout<<out[i];
	combi(s,i+1,0,n);
	combi(s,i,j+1,n);
}
main(){
	string s;
	cin>>s;
	combi(s,0,0,s.length());
}
