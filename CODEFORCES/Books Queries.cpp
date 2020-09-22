#include<iostream>
#include<string>
using namespace std;
int min(int a,int b){
	if(a<b) return a;
	else return b;
}
main(){
	int q;
	cin>>q;
	string s[q];
	for(int i=0;i<=q;i++) getline(cin,s[i]);
	int l[q],r[q],ll=0,rr=0;
	for(int i=0;i<=q;i++){
		if(s[i][0]=='L') l[ll++]=s[i][2];
		else if(s[i][0]=='R') r[rr++]=s[i][2];
		else{
			for(int j=0;j<ll;j++) if(l[j]==s[i][2]){
				cout<<min(ll-j-1,rr+j)<<"\n";
			}
			for(int j=0;j<rr;j++) if(r[j]==s[i][2]){
				cout<<min(rr-j-1,ll+j)<<"\n";
			}
		}
	}
}
