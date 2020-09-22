#include<bits/stdc++.h>
using namespace std;
int union_find(int vtx,int *parent){
	while(parent[vtx]!=vtx){
		vtx=parent[vtx];
	}
	return vtx;
}
vector<pair<int,pair<int,int> > > mst;
void kruskals(vector<pair<int,pair<int,int> > > g,int v){
	int *parent=new int[v];
	for(int i=0;i<v;i++) parent[i]=i;
	sort(g.begin(),g.end());
	int cnt=0,i=0;
	//vector<pair<int,pair<int,int> > > mst;
	while(cnt<v-1){
		//pick edge
		//vector<pair<int,pair<int,int> > > edge=g[i];
		int v1=g[i].second.first,v2=g[i].second.second;
		int p1=union_find(v1,parent);
		int p2=union_find(v2,parent);
		//cout<<v1<<" "<<v2<<" "<<p1<<" "<<p2<<endl;
		if(p1!=p2){
			if(v1<v2){
				parent[p2]=p1;
			    mst.push_back({v1,{v2,g[i].first}});
			}
			else{
				parent[p1]=p2;
			    mst.push_back({v2,{v1,g[i].first}});
			}
			cnt++;
		}
	    i++;
	}
}
main(){
	int v,e;
	cin>>v>>e;
	int a,b,c;
	vector<pair<int,pair<int,int> > > g;
	for(int i=0;i<e;i++) cin>>a>>b>>c,g.push_back({c,{a,b}});
	kruskals(g,v);
	for(int i=0;i<mst.size();i++) cout<<mst[i].first<<" "<<mst[i].second.first<<" "<<mst[i].second.second<<endl;
}
/*
4 4
0 1 3
0 3 5
1 2 1
2 3 8
*/
