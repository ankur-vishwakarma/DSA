#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int t[n][n]={0};
	for(int i=0;i<n-1;i++){
		int j,k;
		cin>>j>>k;
		t[j-1][k-1]=1;
	}
	int q;
	cin>>q;
	int qu[q][3];
	for(int i=0;i<q;i++) cin>>qu[i][0]>>qu[i][1]>>qu[i][2];
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			cout<<t[i][k]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<q;i++) {
		if(qu[i][0]==1) s[qu[i][1]-1]=qu[i][2];
		else{
			int sum=0;
			cout<<t[qu[i][1]-1][1]<<"t\n";
			for(int j=0;j<n;j++) if(t[qu[i][1]-1][j]==1) sum+=s[j];
			cout<<sum<<"\n";
		}
	}
}
