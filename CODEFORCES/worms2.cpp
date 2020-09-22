#include<iostream>
using namespace std;
main(){
	int n,i,m,j,sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	cin>>m;
	int b[m];
	for(j=0;j<m;j++) cin>>b[j];
	for(i=0;i<n;i++){
		 sum=sum+a[i];
		 a[i]=sum;
	}
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(b[i]<=a[j]){
			 cout<<j+1<<"\n";
			 break; 
		}
	  }
	}
}
