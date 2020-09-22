#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		int s[n];
		for(int j=0;j<n;j++) cin>>s[j];
		priority_queue <int> pq;
		for(int j=0;j<n;j++) pq.push(s[j]);
		while(k--){
			cout<<pq.top()<<" ";
			pq.pop();
		}
		cout<<endl;
	}
}
