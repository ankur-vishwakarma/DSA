#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a;
	cin>>n;
	int s[2401]={0};
	for(int i=0;i<n;i++) cin>>a,s[a]+=1;
	for(int i=0;i<n;i++) cin>>a,s[a+1]-=1;
	int m=s[0];
	for(int i=1;i<2401;i++) s[i]+=s[i-1],m=max(m,s[i]);
	cout<<m<<endl;
}
