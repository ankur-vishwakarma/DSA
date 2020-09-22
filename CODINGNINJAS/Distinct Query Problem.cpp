#include<bits/stdc++.h>
using namespace std;
void update(int val,int index,int n,set<int> *BIT){
	for(;index<=n;index+=(index&(-index))){
		//cout<<index<<" ";
		BIT[index].insert(val);
	}
}
int query(set<int> *BIT,int index){
	set<int> ans;
	for(;index>0;index-=(index&(-index))) ans.insert(BIT[index].begin(),BIT[index].end());
	return ans.size();
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int q;
	cin>>q;
	int t[q][2];
	for(int i=0;i<q;i++) cin>>t[i][0]>>t[i][1];
	set<int> *BIT=new set<int>[n+1];
	for(int i=0;i<n;i++) update(s[i],i+1,n,BIT);
	for(int i=1;i<=n;i++){
		for(auto itr:BIT[i]){
			cout<<itr<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<q;i++){
		int l=query(BIT,t[i][0]);
		int r=query(BIT,t[i][1]);
		cout<<r-l+1<<endl;
	}
}
