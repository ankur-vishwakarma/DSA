#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int> &a,const pair<int,int> &b){
	if(a.second==b.second) return a.first<b.first;
	return a.second<b.second;
}
main(){
	int n;
	cin>>n;
	int s[n][2];
	vector <pair<int,int> > v;
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	for(int i=0;i<n;i++) v.push_back({s[i][0]-s[i][1],s[i][0]+s[i][1]});
	sort(v.begin(),v.end(),compare);
    //for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
    int end=v[0].second,count=0;
    for(int i=1;i<n;i++){
    	if(v[i].first<end) count++;
    	else end=v[i].second;
	}
	cout<<count<<endl;
}
/*
4
1 1
2 1
3 2
4 1
*/
