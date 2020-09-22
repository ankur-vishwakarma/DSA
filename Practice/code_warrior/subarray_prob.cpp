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
	for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
	       	if(s[i]!=s[j]){
int flag=0;
		if(s[i]>s[j]){
       for(int j=0;j<v.size();j++) if(s[i]==v[i].first&&s[j]==v[i].second) flag=1;
	if(flag!=1) v.push_back(make_pair(s[i],s[j]));
}
		else if(s[j]>s[i]){
                       for(int j=0;j<v.size();j++) if(s[j]==v[i].first&&s[i]==v[i].second) flag=1;
               if(flag!=1) v.push_back(make_pair(s[j],s[i]));
}
			}}}
      //for(i=0;i<v.size();i++) for(int j=i+1;j<v.size();j++) if(v[i]
	for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
cout<<v.size();
	}

