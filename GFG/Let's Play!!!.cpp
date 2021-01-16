#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m;
		int s[n][m],c[n][m];
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j],c[i][j]=s[i][j];
		cin>>k;
		/*if(k>m){
			cout<<"1\n";
			continue;
		}*/
		int w[k];
		for(int i=0;i<n;i++){
			if(i%2==0){
				for(int j=0;j<k;j++) w[j]=s[i][j];
				for(int j=0;j<m-k;j++) s[i][j]=s[i][j+k];
				for(int j=m-k,l=0;j<m;j++,l++) s[i][j]=w[l];
			}
			else{
				for(int j=m-k,l=0;j<m;j++,l++) w[l]=s[i][j];
				for(int j=m-k,l=0;j>=k;j--,l++) s[i][j]=s[i][j-k];
				for(int j=0;j<k;j++) s[i][j]=w[j];
			}
		}
		//for(int i=0;i<n;i++) for(int j=0;j<m;j++) cout<<s[i][j]<<" ";
		int flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]!=c[i][j]){
					cout<<"0\n";
					flag=1;
					break;
				}
			}
			if(flag==1) break;
		}
		if(flag==0) cout<<"1\n";
	}
}
/*
1
4 4
1 2 3 4
5 6 7 8
9 0 4 2
5 6 7 8
1
*/
