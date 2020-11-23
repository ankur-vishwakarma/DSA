#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > pq;
        for(int i=0;i<points.size();i++){
            int a=pow(points[i][0],2)+pow(points[i][1],2);
            pq.push({a,i});
        }
        vector<vector<int> > ans;
        while(K--){
        	vector<int> p;
        	int index=pq.top().second;
        	//cout<<pq.top().first<<" "<<index<<endl;
        	p.push_back(points[index][0]);
        	p.push_back(points[index][1]);
        	pq.pop();
        	ans.push_back(p);
		}
		return ans;
	}
main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int> > v( n, vector<int> (2,0));
	for(int i=0;i<n;i++) cin>>v[i][0]>>v[i][1];
	vector<vector<int> > ans=kClosest(v,k);
	for(int i=0;i<k;i++) cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
}
