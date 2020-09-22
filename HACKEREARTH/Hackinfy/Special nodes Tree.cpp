#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	list<int> *n;
	
	public:
		graph(int v){
			this->v=v;
			n=new list<int>[v+1];
		}
		void addedge(int a,int b){
			n[a].push_back(b);
		}
		void dfs(int src,int * spec,int & count,int *col){
			//int visited[n]={0};
			//cout<<src<<" "<<col[src]<<endl;
			int base_col=col[src];
			for(int nbr:n[src]){
				//cout<<nbr<<" n "<<col[nbr]<<endl;
				if(col[nbr]==base_col&&!spec[nbr]){
					count++; spec[nbr]=1;
					dfs(nbr,spec,count,col);
				}
			}
			//helper(src,spec,count,col);
		}
};
main(){
	int n;
	cin>>n;
	int s[n][2],col[n+1];
	graph g(n);
	for(int i=0;i<n-1;i++){
		cin>>s[i][0]>>s[i][1];
		g.addedge(s[i][0],s[i][1]);
	}
	for(int i=1;i<=n;i++) cin>>col[i];
	int q;
	cin>>q;
	int t[q];
	for(int i=0;i<q;i++) cin>>t[i];
	int spec[n]={0},count=0;
	//cout<<endl;
	for(int i=0;i<q;i++){
		if(!spec[t[i]]){
			count++;
			spec[t[i]]=1;
		}
		g.dfs(t[i],spec,count,col);
		cout<<count<<endl;
    }
}
