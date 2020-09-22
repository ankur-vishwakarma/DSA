#include<bits/stdc++.h>
using namespace std;
list<int>  *g = new list<int> [10];
//vector<list<int> > g; RANDOM INSERT NOT ALLOWED IN VECTOR ALWAYS FIRST PUSHBACK PUSHES TO 0th thn 1st index
void insert(int u,int v){
	g[u].push_back(v);  //accessed u'th list of 'g' array and pushed
}
int processed[100]={0};
void dfs(int u){
	if(u>9) return;
	/*if(g[u].empty()){
		 dfs(u+1);                 NO NEED OF THIS AS ONLY NO. OF NODES IS GIVEN U CAN TAKE CONTINUOS VALUES
		 return;                       AS 1,2,3,4  IT WILL NEVER BE 1,2,4,5
	}*/
	if(processed[u]==0){
		processed[u]=1;
		cout<<u<<" ";
		list<int> :: iterator it=g[u].begin();
      	while(it!=g[u].end()){
      		dfs(*it); it++;
	    }
	}
}
main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		insert(u,v);
	}
	for(int i=0;i<n;i++){
		list<int> :: iterator it=g[i].begin();
		cout<<i<<"- ";
		while(it!=g[i].end()){
			cout<<*it<<" ";
			it++;
		}
		cout<<endl;
	}
	dfs(1);
}
/*vector<vector<int> > v;
v[i].push_back(7); //*
vector<int> tmp;
tmp*/
