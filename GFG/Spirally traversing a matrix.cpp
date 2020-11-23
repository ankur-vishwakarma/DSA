#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int s[m][n];
		for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>s[i][j];
		int right=n-1,left=0,down=m-1,top=0;
		while(left<=right&&top<=down){
			//right
			for(int i=left;i<=right;i++) cout<<s[top][i]<<" ";
			top++;
			if(left>right||top>down)  break;
			//down
			for(int i=top;i<=down;i++) cout<<s[i][right]<<" ";
			right--;
			if(left>right||top>down)  break;
			//left
			for(int i=right;i>=left;i--) cout<<s[down][i]<<" ";
			down--;
			if(left>right||top>down)  break;
			//up
			for(int i=down;i>=top;i--) cout<<s[i][left]<<" ";
			left++;
		}
		cout<<endl;
	}
}
