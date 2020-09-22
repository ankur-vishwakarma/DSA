#include<iostream>
using namespace std;
main(){
	int q;
	cin>>q;
	int s[q][4];
	for(int i=0;i<q;i++) cin>>s[i][0]>>s[i][1]>>s[i][2]>>s[i][3];
	for(int i=0;i<q;i++){
		cout<<s[i][0]/s[i][1]-s[i][3]/s[i][1]+(s[i][2]-1)/s[i][1]<<"\n";
	}
}
