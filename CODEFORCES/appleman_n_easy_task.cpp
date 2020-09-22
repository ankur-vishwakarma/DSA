#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	char s[n][n+1];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>s[i][j];
	int count=0;
	for(int i=0;i<n;i++){
	       	for(int j=0;j<n;j++){
			count=0;
				if(j+1<n&&s[i][j+1]=='o') count++;
				if(i+1<n&&s[i+1][j]=='o') count++;
				if(i-1>=0&&s[i-1][j]=='o') count++;
				if(j-1>=0&&s[i][j-1]=='o') count++;
		if(count%2!=0){ cout<<"NO"; return 0; }
		}
	}
	cout<<"YES";
}
