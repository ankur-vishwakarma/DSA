#include<bits/stdc++.h>
using namespace std;
int longestBitonicSubarray(int *input, int n) {
    int dpf[n+1];
    int dpb[n+1];
    dpf[0]=1;
    for(int i=1;i<n;i++){
    	int ans=1;
    	for(int j=i-1;j>=0;j--){
    		if(input[i]>input[j]&&ans<1+dpf[j]) ans=1+dpf[j];
		}
		dpf[i]=ans;
	}
	//for(int i=0;i<n;i++) ;
	dpb[n-1]=1;
	for(int i=n-2;i>=0;i--){
		int ans=1;
    	for(int j=i+1;j<n;j++){
    		if(input[i]>input[j]&&ans<1+dpb[j]) ans=1+dpb[j];
		}
		dpb[i]=ans;
	}
	/*for(int i=0;i<n;i++) cout<<dpf[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++) cout<<dpb[i]<<" ";
	cout<<endl;*/
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		ans=max(ans,dpf[i]);
		for(int j=i+1;j<n;j++){
			if(input[j]<input[i]) ans=max(ans,dpf[i]+dpb[j]);
		}
	}
	return ans;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<longestBitonicSubarray(s,n);
}
