#include<bits/stdc++.h>
#define md 1000000007
using namespace std;
int dx[]={-2,-1,1,2,-2,-1,1,2};
int dy[]={-1,-2,2,1,1,2,-2,-1};
void dfs(int **g,int n,int m,int **vis,int i,int j,int &count){
	//cout<<i<<" "<<j<<endl;
	count++;
	vis[i][j]=1;
    for(int k=0;k<8;k++){
    	int x=i+dx[k],y=j+dy[k];
    	if(x>=0&&x<n&&y>=0&&y<m){
    		//cout<<x<<" "<<y<<" "<<g[x][y]<<endl;
    		if(g[x][y]==1&&!vis[x][y]) dfs(g,n,m,vis,x,y,count);
		}
	}
}
long long fact(int n){
	long long f=1;
	for(int i=1;i<=n;i++) f=((f%md)*(i%md))%md;
	return f%md;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,q;
		cin>>n>>m>>q;
		int a,b;
		int **g=new int*[n];
		for(int i=0;i<n;i++) g[i]=new int[m]{0};
		for(int i=0;i<q;i++) cin>>a>>b,g[a-1][b-1]=1;
		int **vis=new int*[n];
		for(int i=0;i<n;i++) vis[i]=new int[m]{0};
		/*for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++) cout<<g[i][j]<<" ";
	    	cout<<endl;
	    }*/
	    int count=0,ways=1;
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++){
	    		if(g[i][j]==1&&!vis[i][j]){
	    			dfs(g,n,m,vis,i,j,count);
	    			long long f=fact(count); f=f%md;
	    			ways=((ways%md)*(f%md))%md;
	    			//cout<<ways<<"w c"<<count<<endl;
	    			count=0;
				}
			}
		}
		cout<<ways<<endl;
	}
}
