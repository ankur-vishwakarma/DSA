#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n],count=0;
		vector<int> g[n+1];
		for(int i=0;i<n;i++) cin>>s[i],g[s[i]].push_back(i);
		int kd=0,ld=0;
		for(int i=0;i<n;i++){
			//search k search in vector
			for(int k=kd;k<g[s[i]].size();k++){
				//cout<<i<<"i k"<<g[s[i]][k]<<endl;
				//here its sure s[i]==s[k]
				if(g[s[i]][k]<=i){
					kd++;
					continue;
				}
				
				for(int j=i+1;j<g[s[i]][k];j++){
					//serach l
					for(int l=ld;l<g[s[j]].size();l++){
						//cout<<ld<<endl;
						//cout<<i<<"i k"<<g[s[i]][k]<<" "<<j<<"j l"<<g[s[j]][l]<<endl;
						if(g[s[j]][l]<=j||g[s[j]][l]<=g[s[i]][k]){
							if(g[s[j]][l]<=j) ld++;
							continue;
						}
						//cout<<i<<" "<<g[s[i]][k]<<" "<<j<<" "<<g[s[j]][l]<<endl;
						count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}
