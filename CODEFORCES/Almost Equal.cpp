#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	if(n%2==0){
		 cout<<"NO";
		 return 0;
	}
	cout<<"YES\n";
	int a[n],b[n],flag=0,j=0,k=1;
	a[0]=1;
	for(int i=2;i<=2*n-1;i+=2){
		if(flag==0){
			b[j++]=i;
			b[j++]=i+1;
			flag=1;
		}
		else{
			 a[k++]=i;
			 a[k++]=i+1;
			 flag=0;
		}
	}
	b[j]=2*n;
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
}
