#include<bits/stdc++.h>
using namespace std;
main(){
	int n,t;
	cin>>n>>t;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		int sum=s[i];
		if(sum==t){
				cout<<"true\n";
				cout<<s[i]<<" ";
				return 0;
			}
		for(int j=i+1;j<n;j++){
			//cout<<sum<<endl;
			sum+=s[j];
			if(sum==t){
				cout<<"true\n";
				for(int k=i;k<=j;k++) cout<<s[k]<<" ";
				return 0;
			}
			else if(sum>t) break;
			
		}
	}
	cout<<"false";
}
