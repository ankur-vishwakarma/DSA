#include<iostream>
using namespace std;
main(){
	int q;
	cin>>q;
	int s[q][4];
	for(int i=0;i<q;i++) cin>>s[i][0]>>s[i][1]>>s[i][2]>>s[i][3];
	for(int i=0;i<q;i++){
		int d=s[i][3]-2;
			int t[d+3],j=3;
			t[0]=s[i][0],t[1]=s[i][1],t[2]=s[i][2];
			while(j<d+3){
				int ttya=0;
				if(j-4>=0) ttya=t[j-4];
				t[j]=t[j-1]+3*j+2*ttya;
				j++;
			}
			cout<<t[j-1]%1000000007<<"\n";		
	}
}

