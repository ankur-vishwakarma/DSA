#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int max=INT_MIN,mi,smax=max,smi,min=INT_MAX,mii,smin=min,smii,p=0;
	for(int i=0;i<n;i++){
		if(s[i]>max) smax=max,smi=mi,max=s[i],mi=i;
		if(s[i]<min) smin=min,smii=mii,min=s[i],mii=i;
	}
	
	cout<<p;
}
