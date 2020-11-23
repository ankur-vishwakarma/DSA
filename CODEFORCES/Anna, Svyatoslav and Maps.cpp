#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	string s;
	int g[n][n];
	memset(g,0,sizeof(g));
	//for(int i=0;i<n;i++) for(int j=0;j<n;j++) cout<<g[i][j];
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++) if(s[j]=='1') g[i][j]=1;
	}
	
	int m;
	cin>>m;
	int p[m];
	for(int i=0;i<m;i++) cin>>p[i];
	
	//floyd warshals
	long long d[100][100];
	memset(d,10000,sizeof(d));
	
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(g[i][j]) d[i][j]=1;
	for(int i=0;i<n;i++) d[i][i]=0;
	
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(d[i][k]+d[k][j]<d[i][j]) d[i][j]=d[i][k]+d[k][j];
			}
		}
	}
	/*for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<d[i][j]<<" ";
			}
			cout<<endl;
		}*/
	
	//add first vertex
	vector<int> ans;
	ans.push_back(p[0]);
	int lst_ver=p[0]-1;
	
	int dist=1;
	for(int u=1;u<m;u++){
		//cout<<p[u]-1<<"u l"<<lst_ver<<" "<<dist<<" "<<d[lst_ver][p[u]-1]<<endl;
		if(dist==d[lst_ver][p[u]-1]){  //if distance between P[U] and last vertex in path == distance in graph (which getted by floyd) we can see next vertex (U++)
			dist++;
			continue;
		}
		ans.push_back(p[u-1]); //So, when it become false -> it means we need add P[U — 1] in answer because there is a last good vertex. now last vertex = P[U — 1],
		lst_ver=p[u-1]-1;
		dist=2;
	}
	ans.push_back(p[m-1]);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
