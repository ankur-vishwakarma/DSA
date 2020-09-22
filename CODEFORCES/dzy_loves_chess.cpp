#include<iostream>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	char s[n+1][m+1];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='.'){
				s[i][j]='W';
				if(i-1>=0&&s[i-1][j]=='.') s[i-1][j]='B';
				if(j-1>=0&&s[i][j-1]=='.') s[i][j-1]='B';
				if(i+1<n&&s[i+1][j]=='.') s[i+1][j]='B';
				if(j+1<n&&s[i][j+1]=='.') s[i][j+1]='B';
			}}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cout<<s[i][j];
		cout<<"\n";
	}
}
