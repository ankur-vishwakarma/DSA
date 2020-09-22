#include<bits/stdc++.h>   //normally likhte hai <iostream>
//if i nw wnt to use vector #include<vector>, sort() use krna h to #include<algorithm>
//#include<bits/stdc++.h> contains all
using namespace std;


//passing 2D array
//two ways
void take1(int s[][5],int n){  //in this we need to know columns before ya to max size dedo
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}


}
void take2(int **s,int rows, int columns){
	cout<<s[2][4]<<" inside fucntion\n";
}



//DFS ON MATRIX
void dfs_matrix(int g[][5],int n,int src,int * visited){
	visited[src]=1;
	cout<<src<<" "<<endl; //process source
	//call dfs for all neighbours of src
	for(int i=0;i<5;i++){
		if(g[src][i]==1&&visited[i]!=1){ //means i m a neighbour
			dfs_matrix(g,n,i,visited);
		}
	}
	
}




main(){
	//VECTOR
	//declare
	vector<int> v;   // is same as ==== int arr[anything] ===
	//put value
	v.push_back(3);
	v.push_back(98);
	//print
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";  //u see we accessed normally like array
	cout<<"VECTOR ENDS\n";
	
	//2D array pass
	//method 1
	int s[2][5];
	for(int i=0;i<2;i++) for(int j=0;j<5;j++) s[i][j]=i;
	take1(s,2);
	
	//declaring dynamically
	//array
	int * arr=new int[5];   //same as int arr[5];  use it normal array
	arr[2]=3;
	cout<<arr[2]<<endl;
	
	//2D array dynamic
	int ** arr2=new int * [5]; //declares 5 rows
	for(int i=0;i<5/*rows*/;i++) arr2[i]=new int[5];
	arr2[2][4]=9;
	cout<<arr2[2][4]<<endl;
	
	//method 2 of passing 2D
	// lets pass arr2 , go check take2() function
	take2(arr2,5,5);
	
	
	
	
	
	//GRAPHS
	//declarations 3 types - 1. adjacency matrix, 2. adjacency list, 3.edge list
	
	//matrix
	int graph1[5][5];  //we created graph of 5*5 means 5 vertices strting frm 0
	//sblo zero kro so tht initially it contains no edges
	//two ways to do this
	for(int i=0;i<5;i++) for(int j=0;j<5;j++) graph1[i][j]=0;
	//OR
	//memset(graph1,0,sizeof(graph1));
	
	
	//since undirected to dono trf one dalte hai
	graph1[1][2]=graph1[2][1]=1;  //ya to graphs k size ek badha du ya to index ko ek km kkrdu
	//graph1[2][3]=1;
	graph1[1][3]=graph1[3][1]=1;
	graph1[2][4]=graph1[4][2]=1;
	
	//DFS  
	int * visited=new int[5];
	for(int i=0;i<5;i++) visited[i]=0; //initially noone is visited
	dfs_matrix(graph1,5,1,visited);
	
}
