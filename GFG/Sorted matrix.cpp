#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int r;
		cin>>r;
		vector<vector<int> > v(r,vector<int>(r));
		for(int i=0;i<r;i++) for(int j=0;j<r;j++) cin>>v[i][j];
		priority_queue< pair<int,pair<int,int>> ,vector<pair<int,pair<int,int>> >,greater<pair<int,pair<int,int>> > > pq;
        for(int i=0;i<r;i++) pq.push({v[i][0],{i,0}});
        while(!pq.empty()){
        	pair<int,pair<int,int> > pp=pq.top();
        	cout<<pp.first<<" ";
        	pq.pop();
        	if(pp.second.second+1<r) pq.push({v[pp.second.first][pp.second.second+1],{pp.second.first,pp.second.second+1}});
		}
		cout<<endl;
	}
}
