#include<bits/stdc++.h>
using namespace std;
bool dfs(int **g,int n,int *vis,int strt,int end){
	//cout<<strt<<endl;
	if(strt==end) return true;
	vis[strt]=1;
	for(int i=0;i<n;i++){
		if(g[strt][i]==1&&!vis[i]){
			bool ans=dfs(g,n,vis,i,end);
			if(ans) return true;
		}
	}
	return false;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b;
		cin>>n>>m;
		int *p=new int[n];
		int *q=new int[n];
		for(int i=0;i<n;i++) cin>>p[i],p[i]--;
		for(int i=0;i<n;i++) cin>>q[i],q[i]--;
		//int q[m][2];
		int **g=new int* [n];
		for(int i=0;i<n;i++) g[i]=new int[n]{0};
		for(int i=0;i<m;i++){
			cin>>a>>b,a--,b--;
			//cout<<p[a]<<" "<<p[b]<<endl;
			g[p[a]][p[b]]=1,g[p[b]][p[a]]=1;
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<g[i][j]<<" ";
			cout<<endl;
		}*/
		int flag=0;
		for(int i=0;i<n;i++){
			int strt=p[i],end=q[i];
			if(strt==end) continue;
			//cout<<strt<<"s e"<<end<<endl;
			int *vis=new int[n]{0};
			bool ans=dfs(g,n,vis,strt,end);
			if(!ans){
				flag=1;
				break;
			}
		}
		if(flag==1) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
