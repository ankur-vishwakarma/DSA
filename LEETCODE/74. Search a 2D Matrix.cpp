#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	if(matrix.size()==0) return false;
        int i=0,j=matrix[0].size()-1;
        while(i<=matrix.size()-1&&j>=0){
    	    //cout<<i<<" "<<j<<endl;
    	    if(matrix[i][j]==target) return true;
    	    if(matrix[i][j]>target) j--;
    	    else i++;
	    }
	    return false;
}

main(){
	int m,n,target;
	cin>>m>>n>>target;
	vector<vector<int>> v( m , vector<int> (n));
	for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>v[i][j];
	cout<<searchMatrix(v,target);
}
