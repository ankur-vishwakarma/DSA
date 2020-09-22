#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v,int val){
		while(val--){
			int tmp=v[0];
		for(int j=1;j<v.size();j++) v[j-1]=v[j];
		v[v.size()-1]=tmp;
		}
		//for(int j=0;j<v.size();j++){ cout<<v[j]<<" "; }
}
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
	for(int i=0;i<t;i++){ rotate(v[i],s[i]);
	}
	for(int i=0;i<t;i++){
	    for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	    cout<<endl;
	}
	return 0;
}
