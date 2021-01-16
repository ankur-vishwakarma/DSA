#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		vector<vector<int> > s;
		for(int i=0;i<n;i++){
			vector<int> tmp;
			for(int j=0;j<n;j++) cin>>a,tmp.push_back(a);
			s.push_back(tmp);
		}
		for(int i=0;i<ceil(n/2);i++){
			for(int j=0;j<ceil(n/2);j++){
				int tmp=s[i][j];
			    s[i][j]=s[j][n-1-i];
			    //cout<<s[i][j]<<endl;
			    s[j][n-i-1]=s[n-i-1][n-j-1];
			    //cout<<s[j][n-i-1]<<endl;
			    s[n-i-1][n-j-1]=s[n-j-1][i];
			    //cout<<s[n-i-1][n-j-1]<<endl;
			    s[n-j-1][i]=tmp;
			    //cout<<s[n-j-1][i]<<endl;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<s[i][j]<<" ";
		}
		cout<<endl;
		}
	}
