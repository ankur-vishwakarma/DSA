#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> v;
		for(int i=0;i<n;i++) v.push_back(s[i]-'0');
		int pos[n],count=1,flag=0;
		stack<int> zeroes,ones;
		for(int i=0;i<n;i++){
			if(v[i]==0){
				if(ones.empty()){
					zeroes.push(count);
					pos[i]=count;
					count++;
					continue;
				}
				pos[i]=ones.top();
				zeroes.push(ones.top());
				ones.pop();
			}
			else{
				if(zeroes.empty()){
					ones.push(count);
					pos[i]=count;
					count++;
					continue;
				}
				pos[i]=zeroes.top();
				ones.push(zeroes.top());
				zeroes.pop();
			}
		}
		cout<<count-1<<endl;
		for(int i=0;i<n;i++) cout<<pos[i]<<" ";
		cout<<endl;
		/*vector<pair<int,int> > v[2];
		for(int i=0;i<n;i++) v[0].push_back({s[i]-'0',i});
		int pos[n],count=1,flag=0;
		while(v[flag].size()>0){
			//for(int i=0;i<v[flag].size();i++) cout<<v[flag][i].first<<" ";
			//cout<<endl;
			pos[v[flag][0].second]=count;
			int init=0;
			for(int i=1;i<v[flag].size();i++){
				if(v[flag][i].first==v[flag][init].first){
					v[flag^1].push_back(v[flag][i]);
					continue;
				}
				else{
					init=i;
					pos[v[flag][init].second]=count;
				}
			}
			v[flag].clear();
			flag=flag^1;
			count++;
		}*/
	}
}
