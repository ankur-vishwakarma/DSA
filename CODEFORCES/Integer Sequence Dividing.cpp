#include<iostream>
using namespace std;
int mod(int a,int b){
	if(a-b>0) return a-b;
	else return b-a;
}
main(){
	int n;
	cin>>n;
	int i=1,j=n,sumi=0,sumj=0,flag=0,flag2=0;
	while(i<=n/2){
		if(flag==0) sumi+=(i+j),flag=1;
		else sumj+=(i+j),flag=0;
		cout<<sumi<<" "<<sumj<<"\n";
		i++,j--;
	}
	cout<<mod(sumi,sumj);
}
