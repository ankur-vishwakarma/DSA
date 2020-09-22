#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	double s[n][3];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1]>>s[i][2];
	double ans[n];
	ans[0]=s[0][2];
	for(int i=1;i<n;i++){
		double bst_hap=INT_MIN;
		for(int j=i-1;j>=0;j--){
			double dist=sqrt(pow(s[i][0]-s[j][0],2)+pow(s[i][1]-s[j][1],2));
			double hap=ans[j]+s[i][2]-dist;
			bst_hap=max(hap,bst_hap);
		}
		ans[i]=bst_hap;
		//cout<<bst_hap<<endl;
	}
	cout<<fixed<<setprecision(6)<<ans[n-1];
}
