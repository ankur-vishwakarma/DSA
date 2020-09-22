#include<bits/stdc++.h>
using namespace std;
void dijktras(int **g,int v,int src){
	int *visited=new int [v]{0};
	int *weight=new int [v];
	for(int i=0;i<v;i++) weight[i]=INT_MAX;
	weight[src]=0;
	int count=0;
	while(count<v){
		//minimum vertex(weight)
		int m=INT_MAX,minVertex=0;
		for(int i=0;i<v;i++){
			if(weight[i]<m&&!visited[i]){
				m=weight[i],minVertex=i;
			}
		}
		cout<<minVertex<<endl;
		visited[minVertex]=1,count++;
		//check neighbours n update weights
		for(int i=0;i<v;i++){
			if(!visited[i]&&g[minVertex][i]){
				//cout<<weight[i]<<" "<<weight[minVertex]+g[minVertex][i]<<endl;
				if(weight[i]>weight[minVertex]+g[minVertex][i]){
			        weight[i]=weight[minVertex]+g[minVertex][i];
		        }
			}
		}
		//for(int i=0;i<v;i++) cout<<i<<" "<<weight[i]<<endl;
	}
	for(int i=0;i<v;i++) cout<<i<<" "<<weight[i]<<endl;
}
main(){
	int v,e;
	cin>>v>>e;
	int **g=new int*[v];
	for(int i=0;i<v;i++) g[i]=new int[v];
	int a,b,c;
	for(int i=0;i<e;i++) cin>>a>>b>>c,g[a][b]=g[b][a]=c;
	dijktras(g,v,0);
}
