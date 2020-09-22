#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	long long s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	long long ans=0;
	for(int i=30;i>0;i--){
		long long sum=0,m_sum=0;
		for(int j=0;j<n;j++){
			if(s[j]>i){
				sum=0;
				continue;
			}
			sum+=s[j];
			sum=max(sum,(long long)0);
			m_sum=max(m_sum,sum);
		}
		ans=max(ans,m_sum-i);
	}
	cout<<ans;
}
