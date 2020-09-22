#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,x,y;
		cin>>n>>m>>x>>y;
		char ** s=new char *[n];
		for(long long i=0;i<n;i++) s[i]=new char[m+1];
		for(long long i=0;i<n;i++) cin>>s[i];
		//for(int i=0;i<n;i++) cout<<s[i]<<endl;
		//count doubles n sigles
		long long ss=0,ds=0;
		for(long long i=0;i<n;i++){
			for(long long j=0;j<m;){
				if(j==m-1){
					if(s[i][j]=='.') ss++;
					j++;
					continue;
				}
				if(s[i][j]=='.'&&s[i][j+1]=='.') ds++,j+=2;
				else if(s[i][j]=='.') ss++,j++;
				else j++;
			}
		}
		//cout<<ss<<" "<<ds<<endl;
		if(2*x<y){
			ss+=(ds*2);
			cout<<ss*x<<endl;
		}
		else{
			cout<<ds*y+ss*x<<endl;
		}
	}
}
