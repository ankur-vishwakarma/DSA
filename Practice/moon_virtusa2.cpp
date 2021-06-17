#include<bits/stdc++.h>
using namespace std;
int minTime(vector<int> processorTime, vector<int> taskTime){

	int n=processorTime.size();
	sort(processorTime.begin(),processorTime.end());
	sort(taskTime.begin(),taskTime.end(),greater<int>());
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		int tmp=processorTime[i]+taskTime[4*i];
		ans=max(tmp,ans);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int> s(n),t(4*n);
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<4*n;i++) cin>>t[i];
	cout<<minTime(s,t);
	return 0;
}





