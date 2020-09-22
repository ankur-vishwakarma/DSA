#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	//curr row
	cout<<x<<" "<<y<<endl;
	//right
	for(int i=y+1;i<=m;i++) cout<<x<<" "<<i<<endl;
	//left
	for(int i=y-1;i>=1;i--) cout<<x<<" "<<i<<endl;
	

	//trav up
	int count=1;
	for(int i=x-1;i>=1;i--){
		if(count%2!=0){
			for(int j=1;j<=m;j++) cout<<i<<" "<<j<<endl;
		}
		else{
			for(int j=m;j>=1;j--) cout<<i<<" "<<j<<endl;
		}
		count++;
	}
	//trav down
	//count--;
	for(int i=x+1;i<=n;i++){
		if(count%2!=0){
			for(int j=1;j<=m;j++) cout<<i<<" "<<j<<endl;
		}
		else{
			for(int j=m;j>=1;j--) cout<<i<<" "<<j<<endl;
		}
		count++;
	}
}
