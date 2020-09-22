#include<bits/stdc++.h>
using namespace std;
void dfsa(vector<int> a[],vector<int> b[],int **vis,int src){
	for(int i=0;i<a[src].size();i++){
		if(!vis[src][a[src][i]]){
			vis[src][a[src][i]]=1;
			dfsb(a,b,vis,b[src][i]);
		}
	}
}
void dfsb(vector<int> a[],vector<int> b[],int **vis,int src){
	for(int i=0;i<b[src].size();i++){
		if(!vis[src][b[src][i]]){
			vis[src][b[src][i]]=1;
			dfsb(a,b,vis,b[src][i]);
		}
	}
}
main(){
	int n;
	cin>>n;
	int s[n][2];
	vector<int> a[n+1];
	vector<int> b[n+1];
	for(int i=0;i<n;i++){
		cin>>s[i][0]>>s[i][1];
		a[s[i][0]].push_back(s[i][1]);
		b[s[i][1]].push_back(s[i][0]);
	}
	int **vis=new int*[1001];
	for(int i=1;i<=1000;i++) vis[i]=new int[1001]{};
	int count=-1;
	for(int i=0;i<n;i++){
		if(!vis[s[i][0]][s[i][1]]){
			count++;
			dfs(a,vis,s[i][0]);
			dfs(g,vis,s[i][1]);
		}
	}
	cout<<count<<endl;
}
