#include<iostream>
using namespace std;
int check(int n,int s[n][n],int m,int k,int count,int cats){
	if(s[k][0]==1) cats++;
	if(s[k][n+1]==0){
		if(cats<=m) count++;
		return count;
	}
	else for(int j=1;j<=n;j++)  if(s[k][j]==1) return count=check(n+2,s,m,j,count,cats);
}
main(){
	int n,m;
	cin>>n>>m;
	int s[n+1][n+2]={0};
	for(int i=1;i<=n;i++) cin>>s[i][0];
		int a,b;
	for(int i=1;i<=n-1;i++){
		cin>>a>>b;
		s[a][b]=1;
	}
	for(int i=1;i<=n;i++){
		int flag=0;
		for(int j=1;j<=n;j++){
			if(s[i][j]==1){
				flag=1;
				break;
			}
		}
		if(flag==1) s[i][n+1]=1;
	}
	int count=check(n+2,s,m,1,0,0);
	cout<<count;
}
