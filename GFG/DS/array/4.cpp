#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	vector <vector<int> >v;
	for(int i=0;i<t;i++){
	    vector<int> tmp; int k,b; 
	    cin>>k;
	    for(int j=0;j<k;j++){ cin>>b; tmp.push_back(b); } 
	    v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
			int tmp=v[i][v[i].size()-1];
		for(int j=v[i].size()-1;j>0;j--) v[i][j]=v[i][j-1];
		v[i][0]=tmp;
	}
	for(int i=0;i<t;i++){
	    for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	    cout<<endl;
	}
	return 0;
}
