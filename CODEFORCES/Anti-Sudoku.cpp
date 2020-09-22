#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s[10];
		for(int i=0;i<9;i++) cin>>s[i];
		//cout<<endl;
		for(int i=0;i<3;i++){
			int j=i*3;
			s[i][j]=s[i][j+1];
		}
		s[3][1]=s[3][2];
		s[4][4]=s[4][5];
		s[5][7]=s[5][8];
		s[6][2]=s[6][3];
		s[7][5]=s[7][6];
		s[8][8]=s[0][8];
		for(int i=0;i<9;i++) cout<<s[i]<<endl;
	}
}
