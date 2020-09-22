#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	//char ops={'+','-','*','/'};
	map<char,int> ops;
	ops['+']=1,ops['-']=1,ops['*']=2,ops['/']=2;
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(!ops[s[i]]) cout<<s[i];
		else{
			int best=st.top();
			while(!st.empty()&&ops[s[i]]==ops[best])
		}
	}
}
