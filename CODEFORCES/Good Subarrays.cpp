#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long a[n];
		for(int i=0;i<n;i++) a[i]=s[i]-'0'-1;   //reduce value of one so tht intead of searching sum=l we searach for 0
		map<int,int> m;
		long long sum=0,count=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(sum==0) count++;
			if(m[sum]){
				count+=m[sum];
			} 
			m[sum]++;
		}
		cout<<count<<endl;
	}
}
