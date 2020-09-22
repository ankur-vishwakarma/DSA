#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t][4];
	for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1]>>s[i][2]>>s[i][3];
	for(int i=0;i<t;i++){
		if(s[i][1]+s[i][2]+s[i][3]==s[i][0]) cout<<"WIN\n";
		else if(s[i][1]+s[i][2]-s[i][3]==s[i][0]||s[i][1]+s[i][3]-s[i][2]==s[i][0]||s[i][3]+s[i][2]-s[i][1]==s[i][0]) cout<<"WIN\n";
		else if(s[i][1]-s[i][2]-s[i][3]==s[i][0]||s[i][2]-s[i][3]-s[i][1]==s[i][0]||s[i][3]-s[i][2]-s[i][1]==s[i][0]) cout<<"WIN\n";
		else cout<<"LOSE\n";
	}
}
