#include<bits/stdc++.h>
using namespace std;
main(){
	long long n;
	cin>>n;
	
	long long sum=(n*(n+1))/2;
	
	long long sum_needed=sum/2;
	
	if(sum%2==0){
		cout<<"0\n";
		
	}else{
		cout<<"1\n";
		sum_needed++;
	}
	
	
	
	vector<int> ans;
	for(int i=n;i>=1&&sum_needed;i--){
		if(sum_needed>=i) sum_needed-=i, ans.push_back(i);
	}
	cout<<ans.size()<<" ";
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
