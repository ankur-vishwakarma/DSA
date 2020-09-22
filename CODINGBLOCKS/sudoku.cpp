#include<bits/stdc++.h>
using namespace std;
int s[9][9]=
	{{0,0,0,7,2,0,0,6,8},
	 {7,0,0,0,0,4,5,0,0},
	 {2,0,0,5,1,0,0,9,0},
	 {0,0,0,0,0,0,0,0,9},
	 {0,5,9,0,0,0,6,0,0},
	 {0,0,0,0,4,0,2,0,0},
	 {5,9,0,0,0,0,0,4,6},
	 {8,2,0,0,0,9,0,3,7},
	 {0,0,4,0,6,0,0,5,0}
	};
void show(){
	cout<<endl;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++) cout<<s[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
}
void check_along_row(int i,int pot[9]){
	for(int j=0;j<9;j++) if(s[i][j]!=0) pot[s[i][j]-1]=1; //assigning usd as one
}
void check_along_col(int i,int pot[9]){
	for(int j=0;j<9;j++) if(s[j][i]!=0) pot[s[j][i]-1]=1; //assigning usd as one
}
void check_along_box(int i,int j,int pot[9]){
	int b_i,b_j;
	//calculating coordinates of box
	if(i<=2) b_i=0;
	else if(i<=5) b_i=3;
	else b_i=6;
	
	if(j<=2) b_j=0;
	else if(j<=5) b_j=3;
	else b_j=6;
	
	for(int a=b_i;a<b_i+3;a++) for(int b=b_j;b<b_j+3;b++) if(s[a][b]!=0) pot[s[a][b]-1]=1;
}
bool sudoku(int i,int j,char caldby){
	cout<<i<<" "<<j<<" "<<s[i][j]<<" "<<caldby<<endl;
	//show();
	//BASE
	if(i==9||j==9){
		show();
		return true; 
	}
	if(s[i][j]!=0){
		bool ans=true;
		if(i<8) ans=sudoku(i+1,j,'f');
		if(j<8&&ans!=false) ans=sudoku(i,j+1,'f');
		return ans;
	}
	
	//RECURSION
	//make queue of potential elements
    //fill a potential element and call on next if false is returned backtrack
    
	//make as per current cell potential queue and fill
	int pot[9]={0}; //initially all=0 so all r potentially available
	//removing wrng candidates along row
	check_along_row(i,pot);
	//removing wrng candidates along column
	check_along_col(j,pot);
	//removing wrng candidates in the current  3*3 box
	check_along_box(i,j,pot);
	
	cout<<"pot queue of "<<i<<" "<<j<<endl;
	for(int k=0;k<9;k++) cout<<pot[k]<<" ";
	cout<<endl;
	
	//checking if pot queue is not empty else our previous assumptions were wrong and need to return
	bool flag=false;
	for(int k=0;k<9;k++) if(pot[k]==0){ flag= true; break;} 
	if(flag==false) return false;
	
	bool ans=false;
	//fill row
	flag=1;
		//trying elements from currently available potential queue
		for(int k=0;k<9;k++){
			if(pot[k]==0){
				s[i][j]=k+1;
			    ans=sudoku(i+1,j,'i');
			    if(ans==true) return true; //if further sudokus returned true means our choice ws correct so we too return true
			    else flag=0;
			}
		}
	//fill column if in row our assumption got wrong and we never got retuned true
	if(flag!=0){
		//trying elements from currently available potential queue
		for(int k=0;k<9;k++){
			if(pot[k]==0){
				s[i][j]=k+1;
			    ans=sudoku(i,j+1,'j');
			    if(ans==true) return true; //if further sudokus returned true means our choice ws correct so we too return true
			}
		}
	}
	//BACKTRACK
	//if we are here means our all assumptions made from this point were wrng
	s[i][j]=0;
	return false;
}
main(){
	sudoku(0,0,'m');
}
