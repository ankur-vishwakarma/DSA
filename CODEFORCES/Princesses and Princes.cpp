#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>g[n+1];
		for(int i=1;i<=n;i++){
			int k,a;
			cin>>k;
			while(k--){
				cin>>a;
				g[i].push_back(a);
			}
		}
		int * dau=new int[n+1]{};
		int * vis=new int[n+1]{};
		for(int i=1;i<=n;i++){
			for(int j=0;j<g[i].size();j++){
				if(!vis[g[i][j]]){
					dau[i]=1;
					vis[g[i][j]]=1;
					//g[i].pop_front();
					break;
				}
			}
		}
		int extra=0,daughter=0;
		for(int i=1;i<=n;i++) if(!dau[i]) { daughter=i; break; }
		if(!daughter){
			cout<<"OPTIMAL\n";
			continue;
		}
		for(int i=1;i<=n;i++) if(!vis[i]) { extra=i; break; }
		cout<<"IMPROVE\n"<<daughter<<" "<<extra<<endl;
		delete [] vis;
	}
}
