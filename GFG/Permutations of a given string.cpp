#include<bits/stdc++.h>
using namespace std;
priority_queue<string,vector<string>,greater<string> > p;
void permute(string s,int i){
	//cout<<i<<" "<<s<<endl;
	if(i==s.size()){
		p.push(s);
		return;
	}
	for(int j=i;j<s.size();j++){
		//swap
		char tmp=s[i];
		s[i]=s[j],s[j]=tmp;
	
		permute(s,i+1);
	
		//backtrack
		tmp=s[i];
		s[i]=s[j],s[j]=tmp;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		permute(s,0); 
		while(!p.empty()) cout<<p.top()<<" ",p.pop();
		cout<<endl;
	}
}
