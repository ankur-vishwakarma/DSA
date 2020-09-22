#include<bits/stdc++.h>
using namespace std;
string s="CODINGNINJA";
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
bool dfs(char Graph[][101],int N, int M,int i,int j,int count,int visited[][101]){
	if(count==s.length()) return true;
	visited[i][j]=1;
	//cout<<i<<" "<<j<<" "<<count<<endl;
	for(int k=0;k<8;k++){
		//cout<<i+dx[k]<<"i j"<<i+dy[k]<<" "<<endl;
		if(i+dx[k]>=0&&i+dx[k]<N&&j+dy[k]>=0&&j+dy[k]<M){
			//cout<<Graph[i+dx[k]][j+dy[k]]<<" "<<s[count]<<endl;
			if(!visited[i+dx[k]][j+dy[k]]&&Graph[i+dx[k]][j+dy[k]]==s[count]){
			bool ans=dfs(Graph,N,M,i+dx[k],j+dy[k],count+1,visited);
			if(ans) return true;
		}
		}
	}
	return false;
}
main(){
	int N,M;
	cin>>N>>M;
	char Graph[N][101];
	for(int i=0;i<N;i++) for(int j=0;j<M;j++) cin>>Graph[i][j];
	int count=0,flag=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			int visited[M][101]={0};
			/*if(flag==0){
				for(int i=0;i<N;i++) for(int j=0;j<M;j++) cout<<visited[i][j]<<" ";
			}
			flag=1;*/
			if(Graph[i][j]==s[count]){
				bool ans=dfs(Graph,N,M,i,j,count+1,visited);
				if(ans) cout<<"true";
			}
		}
	}
	//return false;
}
