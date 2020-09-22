#include<bits/stdc++.h>
using namespace std;
void rotate(int **s,int n){
	for(int i=0;i<ceil(n/2);i++){
		for(int j=0;j<n-i-1;j++){
			int tmp=s[i][j];
			s[i][j]=s[j][n-1-i];
			s[j][n-i-1]=s[n-i-1][n-j-1];
			s[n-i-1][n-j-1]=s[n-j-1][i];
			s[n-j-1][i]=tmp;
		}
	}
}
main(){
	int m,n;
	cin>>m>>n;
	int **s=new int*[m];
	for(int i=0;i<m;i++) s[i]=new int[m];
	for(int i=0;i<m;i++) for(int j=0;j<m;j++) cin>>s[i][j];
	n%=4;
	while(n--){
		for(int i=0;i<ceil(m/2);i++){
		for(int j=0;j<m-i-1;j++){
			int tmp=s[i][j];
			s[i][j]=s[j][m-1-i];
			s[j][m-i-1]=s[m-i-1][m-j-1];
			s[m-i-1][m-j-1]=s[m-j-1][i];
			s[m-j-1][i]=tmp;
			}
		}
	}
	for(int i=0;i<m;i++) for(int j=0;j<m;j++) cout<<s[i][j]<<" ";
}
