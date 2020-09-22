#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int> > pi; 
void showpq(priority_queue <pi , vector<pi>,greater<pi> > pq){
	priority_queue <pi , vector<pi>,greater<pi> > p=pq;
	while(!p.empty()){
		pair<int,pair<int,int> > pr=p.top();
		cout<<pr.first<<" ";
		p.pop();
	}
	cout<<endl;
}
main(){
	int k,n;
	cin>>k>>n;
	int s[k][n];
	for(int i=0;i<k;i++) for(int j=0;j<n;j++) cin>>s[i][j];
	priority_queue <pi , vector<pi>,greater<pi> > pq;  //no,array,index
	for(int i=0;i<k;i++) pq.push({s[i][0],{i,0}});
	pair<int,pair<int,int> > p=pq.top();
	//cout<<p.first<<endl;
	//showpq(pq);
	int ans[k*n];
	for(int i=0;i<k*n;i++){
		pair<int,pair<int,int> > p=pq.top();
		ans[i]=p.first;
		pq.pop();
		if(p.second.second+1<n) pq.push({s[p.second.first][p.second.second+1],{p.second.first,p.second.second+1}});
		//cout<<ans[i]<<" ";
		//showpq(pq);
	}
	for(int i=0;i<k*n;i++) cout<<ans[i]<<" ";
}
