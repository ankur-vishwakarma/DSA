#include<bits/stdc++.h>
using namespace std;
class trie{
	public:
		int maxval;
		trie * child[26];
};
void build(trie* root,string s,int w){
	trie *rootd=root;
	int i=0;
	while(s[i]!='\0'){
		char c=s[i];
		int pos=c-'a';
		//cout<<c<<" "<<pos<<endl;
		//pos-=97;
		if(!rootd->child[pos]){
			rootd->child[pos]=new trie();
			rootd=rootd->child[pos];
			rootd->maxval=w;
		}else{
			rootd=rootd->child[pos];
			if(rootd->maxval<w) rootd->maxval=w;
		}
		i++;
	}
}
void dfs(trie *root){
	for(int i=0;i<26;i++){
		if(root->child[i]){
			cout<<char(i+97)<<" ";
			dfs(root->child[i]);
		}
	}
}
int query(trie* root,string s){
	trie * rootd=root;
	int i=0;
	while(s[i]!='\0'){
		char c=s[i];
		int pos=c-'a';
		if(rootd->child[pos]) rootd=rootd->child[pos];
		else return rootd->maxval;
		i++;
	}
	return rootd->maxval;
}
main(){
	int n,q;
	cin>>n>>q;
	string s[n];
	int wt[n];
	for(int i=0;i<n;i++) cin>>s[i]>>wt[i];
	string srs[q];
	for(int i=0;i<q;i++) cin>>srs[i];
	trie *root=new trie();
	for(int i=0;i<n;i++){
		build(root,s[i],wt[i]);
	}
	//dfs(root);
	for(int i=0;i<q;i++){
		int ans=query(root,srs[i]);
		if(ans==0) cout<<"-1\n";
		else cout<<ans<<endl;
	}
}
