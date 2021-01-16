#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	vector<vector<int> >v;
	for(int i=0;i<t;i++){
		int b; vector<int> tmp;
		cin>>b; int buf;
		for(int j=0;j<b;j++){
			cin>>buf; tmp.push_back(buf);
		}
		v.push_back(tmp);
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<v[i].size();j++){
			//cout<<v[i][j]<<" "<<j<<endl;
			while(v[i][j]!=-1&&v[i][j]!=j){
				int tmp=v[i][v[i][j]];
				v[i][v[i][j]]=v[i][j];
				v[i][j]=tmp;
			}
		}
		for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
			cout<<endl;
	}
	/*
	2
16
0 14 4 7 11 12 -1 13 8 2 1 5 3 6 -1 -1 
35
2 -1 5 4 28 -1 17 -1 7 23 22 -1 18 6 21 12 9 -1 -1 15 -1 33 14 -1 10 0 29 11 25 34 1 3 -1 -1 -1
	*/
}
