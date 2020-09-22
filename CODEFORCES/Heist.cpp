#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int min=s[0],max=s[0],d=0;
	for(int i=0;i<n;i++) if(s[i]<min) min=s[i];
	for(int i=0;i<n;i++) if(s[i]>max) max=s[i];
	d=max-min+1;
	cout<<d-n;
}
