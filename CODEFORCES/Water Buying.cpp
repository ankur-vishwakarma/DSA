#include<iostream>
using namespace std;
main(){
	int q;
	cin>>q;
	long long s[q][3];
	for(int i=0;i<q;i++) cin>>s[i][0]>>s[i][1]>>s[i][2];
	for(int i=0;i<q;i++){
		if(s[i][2]<s[i][1])
			cout<<s[i][0]/2*s[i][2]+s[i][0]%2*s[i][1]<<"\n";
		else cout<<s[i][0]*s[i][1]<<"\n";
	}
}
