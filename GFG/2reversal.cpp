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
	    int l=s[i],j=0;
	    while(s[i]--){
	        int tmp=v[i][j];
	        for(int k=j;k<v[i].size()-l;k+=l){
	            v[i][k]=v[i][k+l];
	        }
	        v[i][v[i].size()-j-1]=tmp;
	        j++;
	        for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	        cout<<endl;
	    }
	}
	for(int i=0;i<t;i++){
	    for(int j=0;j<v[i].size();j++){ cout<<v[i][j]<<" "; }
	    cout<<endl;
	}
	return 0;
}
