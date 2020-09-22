#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],f=0,e=0,z=0;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		int k=s[i];
		while(k%10==0&&k>0) z++,k/=10;
		while(k%5==0&&k>0) f++,k/=5;
		while(k%2==0&&k>0) e++,k/=2;
	}
//	cout<<z<<" "<<f<<" "<<e<<endl; 
	int g;
	if(f<e) g=f;
	else g=e;
	z+=g;
	cout<<z;
}
