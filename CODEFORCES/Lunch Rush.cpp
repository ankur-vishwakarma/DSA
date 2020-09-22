#include<iostream>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	long long max=-1000000000000000000;
	for(int i=0;i<n;i++){
		if(s[i][1]<=k&&s[i][0]>max) max=s[i][0];
		else if(s[i][1]>k){
			int p=s[i][0]+k-s[i][1];
			if(p>max) max=p;
		} 
	}
	cout<<max;
}
