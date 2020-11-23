#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c){
	    priority_queue< pair<int,pair<int,int>> ,vector<pair<int,pair<int,int>> >,greater<pair<int,pair<int,int>> > > pq;
        for(int i=0;i<r;i++) pq.push({matrix[i][0],{i,0}});
        int count=(r*c)/2;
        while(count--){
        	pair<int,pair<int,int> > pp=pq.top();
        	pq.pop();
        	if(pp.second.second+1<c) pq.push({matrix[pp.second.first][pp.second.second+1],{pp.second.first,pp.second.second+1}});
		}
		return pq.top().first;
    }
main(){
	int r,c;
	cin>>r>>c;
	vector<vector<int> > v(r,vector<int>(c));
	for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>v[i][j];
	cout<<median(v,r,c);
}
