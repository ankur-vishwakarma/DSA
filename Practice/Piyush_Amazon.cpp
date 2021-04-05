#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > fun(int s,	vector<vector<int> > f,	vector<vector<int> > b){
	int n=b.size();
	vector<pair<int,int> > bb(n);
	for(int i=0;i<n;i++){
		bb[i].first=b[i][1],bb[i].second=b[i][0];
	}
	sort(bb.begin(),bb.end());
//	for(int i=0;i<n;i++) cout<<bb[i].first<<" "<<bb[i].second<<endl;
	int ans=-1,fi=-1,bi=-1;
	for(int i=0;i<f.size();i++){
		int needed=s-f[i][1];
		pair<int,int> p={needed,0};
		int index=lower_bound(bb.begin(),bb.end(),p)-bb.begin();
		if(index>=n||bb[index].first>needed) index--;
		int local=f[i][1]+bb[index].first;
		cout<<needed<<" "<<local<<"l i"<<index<<endl;
		if(local>ans){
			ans=local;
			fi=f[i][0];
			bi=bb[index].second;
		}
	}
	cout<<ans<<" "<<fi<<" "<<bi<<endl;
	vector<vector<int> > aa;
	vector<int> tmp(2);
	tmp[0]=fi,tmp[1]=bi;
	aa.push_back(tmp);
	return aa;
}
int main(){
 	int n,m,s;
	cin>>n>>m>>s;
	vector<vector<int> > f,b;
	for(int i=0;i<n;i++){
		vector<int> tmp(2);
		cin>>tmp[0]>>tmp[1];
		f.push_back(tmp);
	}
	for(int i=0;i<m;i++){
		vector<int> tmp(2);
		cin>>tmp[0]>>tmp[1];
		b.push_back(tmp);
	}
	vector<vector<int> > ans=fun(s,f,b);
	cout<<ans[0][0]<<" "<<ans[0][1];
}
