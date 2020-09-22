#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	int i,j,s[n][m];
	for(i=0;i<n;i++){
		cin>>s[i][0];
		for(j=1;j<=s[i][0];j++) cin>>s[i][j];
	}
	int t[m],count=0;
	for(i=0;i<m;i++) t[i]=i+1;
	for(i=0;i<n;i++){
		for(j=1;j<=s[i][0];j++){
			for(int k=0;k<m;k++){
				if(s[i][j]==t[k]){
					count++;
					t[k]=0;
					break;
				}
			}
		}
	}
	if(m==count) cout<<"YES";
	else cout<<"NO";
}
