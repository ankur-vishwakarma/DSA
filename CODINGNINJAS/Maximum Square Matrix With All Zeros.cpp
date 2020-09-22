#include<bits/stdc++.h>
using namespace std;
int findMaxSquareWithAllZeros(int** arr, int row, int col){
	int n=row, m=col;
    int **s =new int*[n];
    int ma=0,flag=0;
	for(int i=0;i<n;i++) s[i]=new int[m]{0};
	//base case
	for(int i=n-1;i>=0;i--){
		//lst col
		if(arr[i][n-1]==0) s[i][n-1]=1,flag=1;
		//lst row
		if(arr[n-1][i]==0) s[n-1][i]=1,flag=1;
	}
	if(flag==1) ma=1;
	for(int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			if(arr[i][j]==0){
				s[i][j]=min(s[i+1][j+1],min(s[i+1][j],s[i][j+1]))+1;
			    ma=max(ma,s[i][j]);
			}
			/*for(int k=0;k<n;k++){
				for(int l=0;l<m;l++) cout<<s[k][l]<<" ";
				cout<<endl;
			}*/
		}
	}
	return ma;
}
main(){
	int n,m;
	cin>>n>>m;
	int **g =new int*[n];
	for(int i=0;i<n;i++) g[i]=new int[m];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>g[i][j];
	cout<<findMaxSquareWithAllZeros(g,n,m);
	for(int i=0;i<n;i++) delete g[i];
	delete [] g;
}
