#include<bits/stdc++.h>
#define MAXN 51
using namespace std;
int flag=0;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool dfs(char Graph[][MAXN],int M,int N,int i,int j,int ii,int jj,char col,bool visited[][MAXN]){
	if(i==ii&&j==jj&&flag!=0) return true;
	flag=1;
	visited[i][j]=true;
	for(int k=0;k<4;k++){
		cout<<i+dx[k]<<"i j"<<i+dy[k]<<" "<<endl;
		if(i+dx[k]>=0&&i+dx[k]<N&&j+dy[k]>=0&&j+dy[k]<M){
			if(!visited[i+dx[k]][j+dy[k]]&&Graph[i+dx[k]][j+dy[k]]==col){
				cout<<Graph[i+dx[k]][j+dy[k]]<<" "<<col<<endl;
			bool ans=dfs(Graph,N,M,i+dx[k],j+dy[k],ii,jj,col,visited);
			if(ans) return true;
		}
		}
	}
	return false;
}
main(){
	int M,N;
	cin>>N>>M;
	char Graph[N][MAXN];
	bool visited[N][MAXN]={false};
	for(int i=0;i<N;i++) for(int j=0;j<M;j++) cin>>Graph[i][j];
	int count=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(!visited[Graph[i][j]-65]){
			    flag=0;
				if(dfs(Graph,N,M,i,j,i,j,Graph[i][j],visited)) count++;
			}
		}
	}
	cout<<count; //return count;
}
