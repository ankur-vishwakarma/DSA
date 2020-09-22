#include<bits/stdc++.h>
using namespace std;
void subseq(char s[],char o[],int i,int j){
	//base
	//scout<<i<<" "<<j<<endl;
	if(s[j]=='\0'){
		o[i]='\0';
		cout<<o<<endl;
		return;
	}
	o[i]=s[j];
	subseq(s,o,i+1,j+1);
	//without
	subseq(s,o,i,j+1);
}
main(){
	char s[10],o[10];
	cin>>s;
	subseq(s,o,0,0);
}
