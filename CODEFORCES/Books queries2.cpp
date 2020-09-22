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
	char s[q];
	int t[q];
	for(int i=0;i<=q;i++) cin>>s[i]>>t[i];
	for(int i=0;i<=q;i++) cout<<s[i]<<" "<<t[1]<<"\n";
	int l[q],r[q],ll=0,rr=0;
	for(int i=0;i<=q;i++){
		if(s[i]=='L') l[ll++]=t[i];
		else if(s[i]=='R') r[rr++]=t[i];
		else{
			for(int j=0;j<ll;j++) if(l[j]==t[i]){
				cout<<min(ll-j-1,rr+j)<<"\n";
			}
			for(int j=0;j<rr;j++) if(r[j]==t[i]){
				cout<<min(rr-j-1,ll+j)<<"\n";
			}
		}
	}
}
