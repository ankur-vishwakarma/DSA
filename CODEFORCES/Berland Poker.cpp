#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int n_k=n/k;
		if(m<=n_k) cout<<m<<endl;
		else{
			int max=n_k;
			int left=m-n_k;
			//distribute left to n-1 people
			int i=0,sec_max=1;
			//cout<<left<<endl;
			while(left){
				left--,i++;
				//cout<<left<<" "<<i<<endl;
				if(i==k-1&&left>0) i=0,sec_max++;
			}
			cout<<max-sec_max<<endl;
		}
	}
}
