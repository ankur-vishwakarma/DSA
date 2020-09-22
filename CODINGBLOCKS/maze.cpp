#include<bits/stdc++.h>
using namespace std;
bool isallowed(int s[][10],int i,int j){
	if(s[i][j]==3) return false;
	else return true;
}
bool maze(int s[][10],int m,int n,int i,int j){
	//BASE CASE
	if(i==m-1&&j==n-1){
		s[i][j]=1;
		//printing maze
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				 cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<endl;
	}
	//RECURSIVE
	if(i<m-1){
		//cout<<i<<" "<<j<<" inside i\n";
		//check if next pos is blocked or not
		
		if(isallowed(s,i,j)){
			s[i][j]=1;
			maze(s,m,n,i+1,j); //recursion jst htimk fr current case rest will b solved by recusion
			s[i][j]=0;  //backtracking
		} 
		
	}
	if(j<n-1){
		//cout<<i<<" "<<j<<" inside j\n";
		//check if next pos is blocked or not
	    
	    if(isallowed(s,i,j)){
			s[i][j]=1;
			maze(s,m,n,i,j+1);
			s[i][j]=0;
		} 
	}
	return false;
	
	
	
}
main(){
	int m,n;
	cin>>m>>n;
	int s[10][10]={0};
	for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>s[i][j];
	maze(s,m,n,0,0);
}
