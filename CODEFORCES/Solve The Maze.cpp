#include<bits/stdc++.h>
using namespace std;
int good;
/*bool has_path(char **s,int **dp,int i,int j,int n,int m){
	//cout<<i<<" "<<j<<endl;
	if(i==n-1&&j==m-1&&s[i][j]!='#') return true;
	if(dp[i][j]==1) return true;
	
	bool ans=false;
	if(i+1<n&&s[i+1][j]!='#'&&s[i+1][j]!='+'){
		char tmp=s[i+1][j];
		s[i+1][j]='+';
		ans=has_path(s,dp,i+1,j,n,m);
		s[i+1][j]=tmp;
	}
	if(ans){
		dp[i][j]=1;
		return true;
	}
	if(j+1<m&&s[i][j+1]!='#'&&s[i][j+1]!='+'){
		char tmp=s[i][j+1];
		s[i][j+1]='+';
		ans=has_path(s,dp,i,j+1,n,m);
		s[i][j+1]=tmp;
	}
	if(ans){
		dp[i][j]=1;
		return true;
	}
	if(i-1>=0&&s[i-1][j]!='#'&&s[i-1][j]!='+'){
		char tmp=s[i-1][j];
		s[i-1][j]='+';
		ans=has_path(s,dp,i-1,j,n,m);
		s[i-1][j]=tmp;
	}
		dp[i][j]=1;
		return true;
	}
	if(j-1>=0&&s[i][j-1]!='#'&&s[i][j-1]!='+'){
		char tmp=s[i][j-1];
		s[i][j-1]='+';
		ans=has_path(s,dp,i,j-1,n,m);
		s[i][j-1]=tmp;
	}
	if(ans){
		dp[i][j]=1;
		return true;
	}
	return false;
}
bool has_path2(char **s,int **dp,int i,int j,int n,int m){
	if(dp[i][j]==1) return 1;
	if(j+1<m&&dp[i][j+1]){
		dp[i][j]=1;
		return true;
	}
	if(i+1<n&&dp[i+1][j]){
		dp[i][j]=1;
		return true;
	}
	if(i-1>=0&&dp[i-1][j]){
		dp[i][j]=1;
		return true;
	}
	if(j-1>=0&&dp[i][j-1]){
		dp[i][j]=1;
		return true;
	}
	return false;
}*/
void bfs(char **s,int n,int m,int x, int y,int **vis) {
	//cout<<x<<" "<<y<<endl;
	if(s[n-1][m-1] == '#')
		return;
	if(s[x][y] == 'G')
		++good;
	vis[x][y] = 1;
	
 
	if(x-1>=0 && s[x-1][y] != '#' && !vis[x-1][y])
		bfs(s,n,m,x-1, y,vis);
	if(x+1<n && s[x+1][y] != '#' && !vis[x+1][y])
		bfs(s,n,m,x+1, y,vis);
	if(y-1>=0 && s[x][y-1] != '#' && !vis[x][y-1])
		bfs(s,n,m,x, y-1,vis);
	if(y+1<m && s[x][y+1] != '#' && !vis[x][y+1]) {
		bfs(s,n,m,x, y+1,vis);
	}
 
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char** s=new char *[n];
		for(int i=0;i<n;i++) s[i]=new char[m]{};
		int goods=0;
		for(int i=0;i<n;i++) for(int j=0;j<m;j++){ cin>>s[i][j]; if(s[i][j]=='G') goods++;}
		//block bads
		int flag=0;
		for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				if(s[i][j]=='B'){
					if(j+1<m){
						if(s[i][j+1]=='.') s[i][j+1]='#';
						else if(s[i][j+1]=='G'||(i==n&&j+1==m)){
							flag=1;
							break;
						}
					}
					if(i+1<n){
						if(s[i+1][j]=='.') s[i+1][j]='#';
						else if(s[i+1][j]=='G'||(i+1==n&&j==m)){
							flag=1;
							break;
						}
					}
					if(j-1>=0){
						if(s[i][j-1]=='.') s[i][j-1]='#';
						else if(s[i][j-1]=='G'){
							flag=1;
							break;
						}
					}
					if(i-1>=0){
						if(s[i-1][j]=='.') s[i-1][j]='#';
						else if(s[i-1][j]=='G'){
							flag=1;
							break;
						}
					}
				}
			}
		}
		if(flag==1){
			cout<<"No\n";
			continue;
		}
		//search path for all goods
		flag=0;
		int ** dp=new int *[n];
		for(int i=0;i<n;i++) dp[i]=new int[m]{};
		/*if(s[n-1][m-1]!='#') dp[n-1][m-1]=1;
		for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				//cout<<s[i][j]<<" ";
				if(s[i][j]!='#'){
					if(j+1<m&&dp[i][j+1]==1){
						dp[i][j]=1;
						continue;
					}
					if(i+1<n&&dp[i+1][j]==1){
						dp[i][j]=1;
						continue;
					}
					//if(j-1>=0&&dp[i][j-1])
				}
			}
			//cout<<endl;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout<<dp[i][j]<<" ";
			cout<<endl;
		}*/
		/*for(int i=n-1;i>=0;i--){
			for(int j=m-1;j>=0;j--){
				if(s[i][j]=='G'){
					bool ans=has_path2(s,dp,i,j,n,m);
					if(!ans){
						flag=1;
						break;
					}
				}
			}
		}*/
		good=0;
		bfs(s,n,m,n-1,m-1,dp);
		for(int i=0;i<n;i++) delete [] dp[i];
		delete [] dp;
		if(good==goods) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
