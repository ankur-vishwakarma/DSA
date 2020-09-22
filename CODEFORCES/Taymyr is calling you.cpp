#include<iostream>
using namespace std;
main(){
	int n,m,z;
	cin>>n>>m>>z;
	int s[z/n],t[z/m];
	for(int i=1;i<=z/n;i++) s[i-1]=i*n;
	for(int i=1;i<=z/m;i++) t[i-1]=i*m;
	int count=0;
	for(int i=0;i<z/n;i++) for(int j=0;j<z/m;j++) if(s[i]==t[j]){
		count++;
		break;
	}
	cout<<count;
}
