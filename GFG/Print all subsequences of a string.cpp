#include<bits/stdc++.h>
using namespace std;
void subsq(string s,string op,int i,int j){
	if(i==s.size()){
		op=op+'\0';
		cout<<op<<endl;
		return;
	}
	//dont include
	subsq(s,op,i+1,j);
	//include
	op=op+s[i];
	subsq(s,op,i+1,j+1);
}
main(){
	string s;
	cin>>s;
	subsq(s,"",0,0);
}
