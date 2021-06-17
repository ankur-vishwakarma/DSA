#include<bits/stdc++.h>
using namespace std;
int internal(vector<int> &s){
	int n=s.size();
	int mp[n+1]={};
	for(int i=0;i<n;i++) if(s[i]!=-1) mp[s[i]]=1;
	int count=0;
	for(int i=0;i<n;i++) if(mp[i]) count++;
	return count;
}

vector<string> dates(vector<string> s){
	vector<string> ans;
	for(int i=0;i<s.size();i++){
		if(s[i].size()<10) continue;
		string k="";
		if(s[i][2]=='/'&&s[i][5]=='/'){
			k=k+s[i][6]+s[i][7]+s[i][8]+s[i][9]+s[i][3]+s[i][4]+s[i][0]+s[i][1];
			ans.push_back(k);
		} else if(s[i][2]=='-'&&s[i][5]=='-'){
			k=k+s[i][6]+s[i][7]+s[i][8]+s[i][9]+s[i][0]+s[i][1]+s[i][3]+s[i][4];
			ans.push_back(k);
		} elseif(s[i][4]=='/'&&s[i][7]=='/'){
			k=k+s[i][0]+s[i][1]+s[i][2]+s[i][3]+s[i][5]+s[i][6]+s[i][8]+s[i][9];	
			ans.push_back(k);
		}
		
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	vector<string> ans=dates(s);
	for(int i=0;i<n;i++) cout<<ans[i]<<" ";
	return 0;
}
