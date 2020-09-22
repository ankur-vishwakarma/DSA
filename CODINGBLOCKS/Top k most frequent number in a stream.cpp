#include<bits/stdc++.h>
using namespace std;
/*bool compare(const pair<int,int> &a,const pair<int,int> &b){
	if(a.first==b.first) return a.second<b.second;
	return a.first>b.first;
}*/
struct compare { 
    bool operator()(const pair<int,int> &a,const pair<int,int> &b) 
    { 
        if(a.first==b.first) return a.second>b.second;
	    return a.first<b.first;
    } 
}; 
void showpq(priority_queue <pair<int,int>, vector<pair<int,int> >,compare > pq,int k){
	priority_queue <pair<int,int>, vector<pair<int,int> >,compare > p=pq;
	while(!p.empty()&&k--){
		pair<int,int> pr=p.top();
		cout<<pr.second<<" ";
		p.pop();
	}
	//cout<<endl;
}
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		priority_queue <pair<int,int>, vector<pair<int,int> >,compare > pq; //freq,data
		vector<pair<int,int> > v;
		unordered_map <int,bool> mp;
		for(int i=0;i<n;i++){
			if(!mp[s[i]]){
				mp[s[i]]=true;
				pq.push({1,s[i]});
				showpq(pq,k);
			}
			else{
				while(pq.top().second!=s[i]) v.push_back(pq.top()),pq.pop();
				pair<int,int> pr=pq.top();
				pr.first++;
				pq.pop();
				pq.push(pr);
				for(int j=0;j<v.size();j++) pq.push(v[j]);
				v.clear();
				showpq(pq,k);
			}
		}
		cout<<endl;
	}
}
/*
3
5 4
5 2 1 3 2
8 4
5 1 3 5 2 1 1 3
8 3
5 1 3 5 2 1 1 3
*/
