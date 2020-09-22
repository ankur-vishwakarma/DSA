#include<bits/stdc++.h>
using namespace std;
	int cycle_dfs(int **g,int n,int srci,int cc,int j){
		//cout<<srci<<" called on "<<j<<" "<<cc<<endl;
		if(cc==3&&j==srci) return 1;
		if(cc==3) return 0;
		//check neighbours of j
		int count=0;
		for(int k=0;k<n;k++){
			if(g[j][k]==1) count+=cycle_dfs(g,n,srci,cc+1,k);
		}
		return count;
	}
	int solve(int n,int m,vector<int>u,vector<int>v)
	{
	    int ** g=new int*[n];
	    for(int i=0;i<n;i++) g[i]=new int[n]{0};
	    for(int i=0;i<m;i++){
	    	g[u[i]-1][v[i]-1]=1;
	        g[v[i]-1][u[i]-1]=1;
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<g[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;*/
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(g[i][j]==1) count+=cycle_dfs(g,n,i,1,j);
			}
		}
		return count/6;
	}
main(){
	int n,m,a;
	cin>>n>>m;
	vector<int> u,v;
	for(int i=0;i<m;i++) cin>>a,u.push_back(a);
	for(int i=0;i<m;i++) cin>>a,v.push_back(a);
	cout<<solve(n,m,u,v);
}
