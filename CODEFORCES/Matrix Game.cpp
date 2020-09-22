#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;	
		cin>>n>>m;
		int s[n][m];
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];
		int count=0;
		int row[n]={},col[m]={};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]==1){
					col[j]=1,row[i]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]==0&&!row[i]&&!col[j]) count++,row[i]=1,col[j]=1;
			}
		}
		//cout<<count<<endl;
		if(count%2==0) cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
}
