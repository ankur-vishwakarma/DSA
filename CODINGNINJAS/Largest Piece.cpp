#include<bits/stdc++.h>
#define NMAX 51
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int dfs(int n,char cake[NMAX][NMAX],int **vis,int srci,int srcj,int &count){
	vis[srci][srcj]=1;
	count++;
	for(int k=0;k<4;k++){
		int i=srci+dx[k],j=srcj+dy[k];
		if(i>=0&&i<n&&j>=0&&j<n){
			if(cake[i][j]=='1'&&!vis[i][j]){
				dfs(n,cake,vis,i,j,count);
			}
		}
	}
	return count;
}
int solve(int n,char cake[NMAX][NMAX])
{
	int ** vis=new int*[n];
	for(int i=0;i<n;i++) vis[i]=new int[n]{0};
	int count=0,m=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(cake[i][j]=='1'&&!vis[i][j]){
				count= dfs(n,cake,vis,i,j,count);
			}
			m=max(count,m);
			count=0;
		}	
	}
	return m;
}
main(){
	int n;
	cin>>n;
	char s[n][NMAX];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>s[i][j];
	cout<<solve(n,s);
}
