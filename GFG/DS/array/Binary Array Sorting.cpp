#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int j=n-1,i=0;
		while(i<j){
			if(s[i]==1){
				while(s[j]!=0&&j>i) j--;
			    //invert
			    if(j>i) s[i]=1-s[i],s[j]=1-s[j];
			}
			i++;
		}
		for(int i=0;i<n;i++) cout<<s[i]<<" ";
		cout<<"\n";
	}
}
