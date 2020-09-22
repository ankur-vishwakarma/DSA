#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int print=0,flag=0;
	for(int i=0;i<=n;i++){
		for(int j=n-i;j>0;j--) cout<<"  ";
		for(int j=0;j<2*i+1;j++){
			cout<<print;
			if(j!=2*i) cout<<" ";
			if(flag==0) print++;
			else print--;
			if(print>=i) flag=1;
		}
		print=0,flag=0;
		cout<<"\n";
	}
	for(int i=n;i>0;i--){
		for(int j=n;j>=i;j--) cout<<"  ";
		for(int j=0;j<2*i-1;j++){
			cout<<print;
			if(j!=2*i-2) cout<<" ";
			if(flag==0) print++;
			else print--;
			if(j>=(2*i-1)/2-1) flag=1;
		}
		print=0,flag=0;
		cout<<"\n";
	}
}
