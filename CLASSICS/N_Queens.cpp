#include<bits/stdc++.h>
using namespace std;
//declaring chess board here to avoid extra burden of passing 2D array
int chess[100][100]={0};
bool n_queens(int n,int i){
	if(i>=n){
		//PRINT board
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(chess[i][j]==1) cout<<"Q ";
				else cout<<"~ ";
			}
			cout<<endl;
		}
		cout<<"\n\n";
		return true;
	}
	//trying to place queen at every column
	for(int j=0;j<n;j++){
		//checking current cell is safe or not
		//checking previous rows keeping column constant
		int k=i-1,flag=0;
		while(k>=0) if(chess[k--][j]==1){  flag=1; break; }
		if(flag==1) continue;
		//checking left diagonal
		int a=i-1,b=j-1;
		while(a>=0&&b>=0) if(chess[a--][b--]==1) {  flag=1; break; }
		if(flag==1) continue;
		//checking right diagonal
		a=i-1,b=j+1;
		while(a>=0&&b<n) if(chess[a--][b++]==1) {  flag=1; break; }
		if(flag==1) continue;
		
		/*cout<<i<<"i "<<j<<"j\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<chess[i][j]<<" ";
			cout<<endl;
		}
		cout<<"\n\n";*/
		
		//ALL GOOD IF WE ARE HERE MEANS LOCALLY THIS PLACE IS BEST
		//placing queen
		chess[i][j]=1;
		
		//calling on next row now as we cant place another queen in this current row as we already
		//placed one
		bool ans=n_queens(n,i+1);
		
		//backtracking even if we got the solution
		//we can stop here depending on ans we can return but as we want all solutions so will backtrack
		//for one solution take in account value of 'ans' and return if its true as it will be true if we
		//hit the base case
		chess[i][j]=0;
	}
}
main(){
	int n;
	cin>>n;
	n_queens(n,0);
}
