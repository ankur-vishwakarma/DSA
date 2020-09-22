#include<bits/stdc++.h>
using namespace std;
class trie{
	public:
	trie *left,*right;
	trie(){
		left=right=NULL;
	}
};
void build(trie *head,int n){
	trie * curr=head;
	for(int j=31;j>=0;j--){
		int b=(n>>j)&1;
		if(b==0){
			if(curr->left==NULL) curr->left=new trie();
			curr=curr->left;
		}
		else{
			if(curr->right==NULL) curr->right=new trie();
			curr=curr->right;
		}
	}
}
int dfs(trie *head,int i){
	if(head->left==NULL&&head->right==NULL) return 0;
	//cout<<val<<" ";
	int left=-1,right=-1,ans=0;
	if(head->left!=NULL) left=dfs(head->left,i-1);
	if(head->right!=NULL) right=dfs(head->right,i-1);
	if(left!=-1&&right!=-1) return pow(2,i)+left+right;
	else if(left!=-1) return left;
	else return right;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	trie *head=new trie();
	for(int i=0;i<n;i++){
		build(head,s[i]);
	}
	cout<<dfs(head,31);
}
