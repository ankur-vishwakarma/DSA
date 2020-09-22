#include<bits/stdc++.h>
using namespace std;
int dp[1000]={0};
int min_nos(int n,vector<int> v,vector <int> s){
	//cout<<n<<endl;
	if(n==0){
		//for (int i=0;i<s.size();i++) cout <<s[i]<<" ";
		//cout<<endl;
		return s.size();
	}
	//if(dp[n]) return dp[n];
	int m=1000;
	for(int i=0;i<v.size();i++){
		if(n-v[i]<0) break;
		s.push_back(v[i]);
		int ans=min_nos(n-v[i],v,s);
		auto it=s.end(); it--;
		s.erase(it);
		m=min(m,ans);
	}
	//dp[n]=m;
	return m;
}
main(){
	int n;
	cin>>n;
	vector<int> sqrs;
	int i=1,sq=1;
	do{
		sqrs.push_back(sq);
		i++;
		sq=i*i;
	}while(sq<=n);
	vector<int>  s;
	sort(sqrs.begin(),sqrs.end(),greater<int>());
	cout<<min_nos(n,sqrs,s);
}
/*
map<int,int> m;
	for(int i=0;i<ans.size();i++) if(!m[ans[i]]) ans[i]=1;
	cout<<n<<" "<<m.size()<<endl;
	//for(auto it=m.begin();it!=m.end();it++) cout<<it->first<<" ";
	//cout<<endl;
	return m.size();
*/
