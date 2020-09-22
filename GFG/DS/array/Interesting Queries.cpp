#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,k;
		cin>>n>>q>>k;
		vector<vector<int> > v;
		int s[n],ref[1005]={0}; 
		for(int i=0;i<n;i++){
			cin>>s[i];
			ref[s[i]]++;
			vector<int> tmp;
			for(int j=1;j<1001;j++) tmp.push_back(ref[j]);
			v.push_back(tmp);
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<10;j++) cout<<mat[i][j]<<" ";
			cout<<endl;
		}*/
		int qrs[q][2];
		for(int i=0;i<q;i++) cin>>qrs[i][0]>>qrs[i][1];
		for(int i=0;i<q;i++){
			int count=0;
			for(int j=1;j<1001;j++){
				//cout<<mat[qrs[i][1]-1][j]<<" "<<mat[qrs[i][0]-1][j]<<endl;
				if(v[qrs[i][1]-1][j]-v[qrs[i][0]-1][j]>=k) count++;
			}
			cout<<count<<" ";
		}
		cout<<endl;
	}
}
