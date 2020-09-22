#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int s[100005]={};
		for(int i=0;i<n;i++){
			cin>>k;
			s[k]=1;
		}
		int m=0,count=0;
		for(int i=0;i<100005;){
			count=0;
			while(s[i]==1) i++,count++;
			m=max(m,count);
			i++;
		}
		cout<<m<<endl;
	}
}
