#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *s=new int[n];
		for(int i=0;i<n;i++) cin>>s[i];
		vector<int> ans;
		ans.push_back(s[0]);
		int pre=s[0];
		for(int i=1;i<n;){
			if(s[i]>pre){
				while(s[i]>s[i-1]&&i<n) i++;
				if(i==n) ans.push_back(s[n-1]);
				else{
					//cout<<i<<endl;
					pre=s[i-1];
					ans.push_back(pre);
					//cout<<pre<<endl;
				}
			}
			else{
				while(s[i]<s[i-1]&&i<n) i++;
				if(i==n) ans.push_back(s[n-1]);
				else{
					pre=s[i-1];
					ans.push_back(pre);
				}
			}
		}
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
}
