#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],k[n];
	for(int i=0;i<n;i++) cin>>s[i];
	k[0]=1;
	for(int i=1;i<n;i++){
		if(s[i]>s[i-1]) k[i]=k[i-1]+1;
		else k[i]=1;
	}
	//for(int i=0;i<n;i++) cout<<k[i]<<" ";
	//cout<<endl;
	vector<int> v;
	int m=1,j,h=0;
	if(n==2) m=s[1];
	for(int i=1;i<n;i++){
		//cout<<i<<" ";
		if(k[i]==1) v.push_back(k[i-1]);
	}
	v.push_back(k[n-1]);
	for(int i=0;i<v.size()-1;i++) m=max(m,v[i]+v[i+1]-1);
	cout<<m;
}
