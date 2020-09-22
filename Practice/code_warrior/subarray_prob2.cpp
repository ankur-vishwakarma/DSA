#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	vector<pair<int,int > > v;
	for(int i=0;i<n;i++) cin>>s[i];
        sort(s,s+n);
//for(int i=0;i<n;i++) cout<<s[i];
	for(int i=n-1;i>0;i--){
int flag=0;
		if(s[i]>s[i-1]){
       for(int j=0;j<v.size();j++) if(s[i]==v[i].first&&s[i-1]==v[i].second) flag=1;
	if(flag!=1) v.push_back(make_pair(s[i],s[i-1]));
		
			}}
      //for(i=0;i<v.size();i++) for(int j=i+1;j<v.size();j++) if(v[i]
	//for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
cout<<v.size();
	}

