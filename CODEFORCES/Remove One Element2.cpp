#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int i=0,inv=0,max=1,count=1;
	while(i+1<n){
		if(s[i+1]>s[i]&&inv<=1) count++;
		if(count>max) max=count;
		if(s[i+1]<s[i]) inv++;
		if(inv==2) count=1,inv=0;
		i++;
	}
	cout<<max;
}
