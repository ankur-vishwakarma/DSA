#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int col=m-1,ans=-1;
	    for(int i=0;i<n;i++){
	    	while(col>=0&&arr[i][col]==1){
	    		col--,ans=i;
			}
		}
		return ans;
	}
main(){
	int r,c;
	cin>>r>>c;
	vector<vector<int> > v(r,vector<int>(c));
	for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>v[i][j];
	cout<<rowWithMax1s(v,r,c);
}
