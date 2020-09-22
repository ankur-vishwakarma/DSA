#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> a,vector<int> b){
	return a[2]<b[2];
}
void update(int * fnwk,int ind,int n){
	for(;ind<=n;ind+=(ind&(~ind))) fnwk[ind]++;
}
int query(int *fnwk,int ind){
	int cnt=0;
	for(;ind>0;ind-=(ind&(~ind))) cnt+=fnwk[ind];
	return cnt;
}
main(){
	int n;
	cin>>n;
	vector<pair<int,int> > s;
	for(int i=0;i<n;i++) cin>>s[i].first,s[i].second=i;
	int q;
	cin>>q;
	vector<vector<int> > t;
	for(int i=0;i<q;i++){
		int a;
		vector<int> tmp;
		for(int j=0;j<3;j++) cin>>a,tmp.push_back(a);
		tmp.push_back(i);
		t.push_back(tmp);
	}
	sort(s.begin(),s.end(),greater<int>());
	sort(t.begin(),t.end(),comp);
	int j=0;
	int * fnwk=new int[n+1]{0};
	int ans[q];
	for(int i=0;i<q;i++){
		while(s[j].first>t[i][2]&&j<n) update(fnwk,s[i].second,n),j++;
		int r=query(fnwk,t[i][1]);
		int l=query(fnwk,t[i][0]-1);
		ans[t[i][3]]=r-l;
	}
}
