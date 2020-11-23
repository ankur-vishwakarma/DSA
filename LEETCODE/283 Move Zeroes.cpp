#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int i=0;
    for(int j=0;j<nums.size();j++){
    	if(nums[j]!=0) nums[i]=nums[j],i++;
	}
	for(int j=i;j<nums.size();j++) nums[j]=0;
}
main(){
	int n,s;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) cin>>s,v.push_back(s);
	moveZeroes(v);
	for(int i=0;i<n;i++) cout<<v[i]<<" ";
}
