#include<bits/stdc++.h>
using namespace std;
class trie{
	public:
		trie * left,* right;
	trie(){
		left=right=NULL;
	}
};
void build(trie *head,int n){
	trie * chead=head;
	for(int i=31;i>=0;i--){
		int b=(n>>i)&1;
		if(b==0){
			if(chead->left==NULL) chead->left=new trie();
			chead=chead->left;
		}
		else{
			if(chead->right==NULL) chead->right=new trie();
			chead=chead->right;
		}
	}
}
int max_xor(trie *head,int n){
	int val=0;
	trie *chead=head;
	for(int i=31;i>=0;i--){
		int b=(n>>i)&1;
		if(b==0){
			if(chead->right!=NULL){
				val+=pow(2,i);
				chead=chead->right;
			}
			else chead=chead->left;
		}
		else{
			if(chead->left!=NULL){
				val+=pow(2,i);
				chead=chead->left;
			}
			else chead=chead->right;
		}
	}
	return val;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	trie *head=new trie();
	build(head,s[0]);
	int xor_yet=s[0],maxXor=0;
	for(int i=1;i<n;i++){
		xor_yet=xor_yet^s[i];
		int ans=max_xor(head,xor_yet);
		cout<<s[i]<<" "<<ans<<endl;
		maxXor=max(ans,maxXor);
		build(head,xor_yet);
	}
	cout<<maxXor<<endl;
}
