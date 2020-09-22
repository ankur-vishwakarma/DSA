#include<bits/stdc++.h>
using namespace std;
void rb(int s[],int i,int j,int n){
	if(i==n||j==n) return;
	if(s[i]>s[j]){
		int tmp=s[j-1];
		s[j-1]=s[j];
		s[j]=tmp;
	}
	cout<<i<<" "<<j<<endl;
	rb(s,i,j+1,n);
	rb(s,i+1,j,n);
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	rb(s,0,0,n);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
