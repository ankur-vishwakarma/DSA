#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > ans;
void subs(int *s,int i,int j,unordered_map<int,int> &m,int lst_entry,int *visited){
	//cout<<i<<" "<<j<<endl;
	if(j<i) return;
	if(s[i]==s[j]&&(!visited[i]||!visited[j])){
		visited[i]=visited[j]=1;
		if(s[i]==lst_entry){
			if(i==j) m[s[i]]+=1;
			else m[s[i]]+=2;
		}
		else{
			if(i==j) m[s[i]]=1;
			else m[s[i]]=2;
			//ans.push_back({pos,m[lst_entry]});
			lst_entry=s[i];
		}
		return subs(s,i+1,j-1,m,lst_entry,visited);
	}
	//unequal
	subs(s,i+1,j,m,lst_entry,visited); //skip frm frnt
	subs(s,i,j-1,m,lst_entry,visited); //frm end
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		unordered_map<int,int> m;
		int visited[n]={0};
		subs(s,0,n-1,m,-1,visited);
		int fm=0,sm=0;
		for(auto it: m){
			//cout<<it.first<< " "<<it.second<<endl;
			if(it.second>=fm) sm=fm,fm=it.second;
		}
		cout<<fm+sm<<endl;
	}
}
