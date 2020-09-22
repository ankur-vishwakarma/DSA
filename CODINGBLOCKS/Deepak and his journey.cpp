#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c[n],l[n];
		for(int i=0;i<n;i++) cin>>c[i];
		for(int i=0;i<n;i++) cin>>l[i];
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=(c[i]*l[i]);
			int j=i+1;
			while(c[j]>c[i]&&j<n) sum+=(c[i]*l[j]),j++;
			//cout<<sum<<endl;
			i=j-1;
		}
		cout<<sum<<endl;
	}
}
