#include<bits/stdc++.h>
using namespace std;
class trie{
	public:
		trie *child[26];
};
map<string,int> m;
void build(trie *head,string s){
    m[s]=1;
	trie * root=head;
	int i=0;
	while(s[i]!='\0'){
		int pos=s[i]-'a';
		if(!root->child[pos]) root->child[pos]=new trie();
	    root=root->child[pos];
	    i++;
	}
}

void print(trie *root,char * s,int j){
	//cout<<s<<" "<<j<<endl;
	int flag=0;
	for(int i=0;i<26;i++){
		if(root->child[i]){
			flag=1;
			char c=(i+'a');
			//cout<<i<<" "<<c<<" "<<s<<endl;
			s[j]=c;
			print(root->child[i],s,j+1);
			s[j]='\0';
		}
	}
	if(flag==0){
		s[j]='\0';
		cout<<s<<endl;
	}
}
void autosug(trie * head,char * s){
	trie * root=head;
	int i=0;
	while(s[i]!='\0'){
		int pos=s[i]-'a';
		//cout<<s[i]<<" "<<pos<<endl;
		if(!root->child[pos]){
			cout<<"No suggestions\n";
			build(head,s);
			return;
		}
		else root=root->child[pos];
		i++;
	}
	if(m[s]) cout<<s<<endl;
	print(root,s,i);
	m.clear();
}
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int q;
	cin>>q;
	char w[q][1000];
	for(int i=0;i<q;i++) cin>>w[i];
	trie *head=new trie();
	for(int i=0;i<n;i++){
		build(head,s[i]);
	}
	for(int i=0;i<q;i++){
		autosug(head,w[i]);
	}
}
