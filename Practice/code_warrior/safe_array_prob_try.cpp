#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t][3];
	vector< vector<int> >v;
        for(int i=0;i<t;i++){
		vector<int> temp;
		cin>>s[i][0]>>s[i][1]>>s[i][2];
		for(int j=0;j<s[i][0];j++){
			int k;
			cin>>k;
			temp.push_back(k);
		}
		v.push_back(temp);
	}
/*	for(int i=0;i<t;i++){
	       	for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
		cout<<"\n";
	}
	for(int i=0;i<t;i++){
	    if(s[i][0]>=s[i][1]) cout<<"NO\n";
	    else cout<<"YES\n";
	}*/
	for(int i=0;i<t;i++){
                 cout<<"YES\n";
             }

}
