#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long *cubes=new long long[101];
	for(int i=2;i<=100;i++) cubes[i]=pow(i,3);
	int l=0;
	while(t--){
		l++;
		int n,flag=0;
		cin>>n;
		for(int i=0;cubes[i]<=n;i++) if(n%cubes[i]==0){ flag=1; break;}
		if(flag){
			cout<<"Case "<<l<<": Not Cube Free\n";
			continue;
		}
		int i=2,a=0;
		while(cubes[i]<=n){
			a+=n/cubes[i];
			i++;
		}
		cout<<"Case "<<l<<": "<<n-a<<endl;
	}
}
