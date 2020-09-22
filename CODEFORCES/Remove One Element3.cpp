#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int max=1,i=0,count=1,hold=1,inv=0;
	while(i+1<n){
		if(s[i+1]>s[i]) count++;
		else inv++,hold=count;
		if(count>max) max=count;
		if(inv>1){ inv=0,count=count-hold+1; continue;}
		if(s[i+1]<s[i]&&!(s[i+1]>s[i-1])) count=1;
		i++;
	}
	cout<<max;
}
