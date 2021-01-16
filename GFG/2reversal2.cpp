#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	vector <vector<int> >v;
	vector<int> s;
	for(int i=0;i<t;i++){
	    vector<int> tmp; int k,b; 
	    cin>>k;
	    for(int j=0;j<k;j++){ cin>>b; tmp.push_back(b); } 
	    v.push_back(tmp);
	    cin>>k; s.push_back(k);
	}
	for(int i=0;i<t;i++){
		while(s[i]--){
			int tmp=v[i][0];
		for(int j=1;j<v[i].size();j++) v[i][j-1]=v[i][j];
		v[i][v[i].size()-1]=tmp;
		}
	}
	for(int i=0;i<t;i++){
	    for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	    cout<<endl;
	}
	return 0;
}
