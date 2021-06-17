#include<bits/stdc++.h>
using namespace std;
string removevowel(string engStr){
	string answer ="";
	for(int i=0;i<strlen(engStr);i++){
		if(engStr[i]=='a'||engStr[i]=='e'||engStr[i]=='i'||engStr[i]=='o'||engStr[i]=='u') continue;
		answer=answer+engStr[i];
	}
	return answer;
}
main(){
	string s;
	cin>>s;
	cout<<removevowel(s);
}
