#include<bits/stdc++.h>
using namespace std;
main(){
	int v,e;
	cin>>v>>e;
	int **g=new int*[v];
	for(int i=0;i<v;i++) g[i]=new int[v];
	for(int i=0;i<v;i++) for(int j=0;j<v;j++) g[i][j]=INT_MAX;
	int a,b,c;
	for(int i=0;i<e;i++) cin>>a>>b>>c,g[a][b]=g[b][a]=c;
	int *vis=new int[v]{0};
	int *par=new int[v];
	for(int i=0;i<v;i++) par[i]=-1;
	int *wt=new int[v];
	for(int i=0;i<v;i++) wt[i]=INT_MAX;
	int flag=0;
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			if(g[i][j]!=INT_MAX){
				wt[i]=0;
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	int count=0;
	while(count!=v-1){
        count++;
		//find nearest vertex with min wt
		int m=INT_MAX,ver;
		for(int i=0;i<v;i++) if(wt[i]<m&&!vis[i]) m=wt[i],ver=i;
		vis[ver]=1;
		//update wts of neighbours
		for(int i=0;i<v;i++) if(g[ver][i]<wt[i]&&!vis[i]) wt[i]=g[ver][i],par[i]=ver;
		/*cout<<ver<<"\npar\n";
		for(int i=0;i<v;i++) cout<<i<<" ";
		cout<<endl;
		for(int i=0;i<v;i++) cout<<par[i]<<" ";
		cout<<endl;
		for(int i=0;i<v;i++) cout<<wt[i]<<" ";
		cout<<endl;*/
	}
	for(int i=0;i<v;i++){
		if(par[i]!=-1){
			if(par[i]<i) cout<<par[i]<<" "<<i<<" "<<wt[i]<<endl;
		    else cout<<i<<" "<<par[i]<<" "<<wt[i]<<endl;
		}
	}
}
