#include<bits/stdc++.h>
using namespace std;
void build(int *s,int *tree,int strt,int end,int node){
	if(strt==end){
		tree[node]=s[strt];
		return;
	}
	int mid=(strt+end)/2;
	build(s,tree,strt,mid,2*node);
	build(s,tree,mid+1,end,2*node+1);
	int left=(tree[2*node]*pow(2,end-mid));
	left%=3;
	tree[node]=left+tree[2*node+1];
	tree[node]%=3;
	return;
}
void update(int *tree,int strt,int end,int node,int ind){
	if(strt==end){
		if(!tree[node]) tree[node]=1;
		return;
	}
	int mid=(strt+end)/2;
	if(ind<=mid) update(tree,strt,mid,2*node,ind);
	else update(tree,mid+1,end,2*node+1,ind);
	int left=(tree[2*node]*pow(2,end-mid));
	left%=3;
	tree[node]=left+tree[2*node+1];
	tree[node]%=3;
	return;
}
int query(int *tree,int strt,int end,int node,int l,int r){
	//cout<<strt<<" "<<end<<" "<<tree[node]<<endl;
	if(l>end||r<strt) return 0;
	if(strt>=l&&end<=r) return tree[node];
	int mid=(strt+end)/2;
	int left=query(tree,strt,mid,2*node,l,r);
	int right=query(tree,mid+1,end,2*node+1,l,r);
	left=left*pow(2,r-mid);
	left%=3;
	int ans= left+right;
	ans%=3;
	return ans;
}
main(){
	int n,q;
	cin>>n;
	string st;
	cin>>st>>q;
	int w[q][3];
	for(int i=0;i<q;i++){
		cin>>w[i][0]>>w[i][1];
		if(w[i][0]==0) cin>>w[i][2];
	}
	int s[n];
	for(int i=0;i<n;i++) s[i]=st[i]-'0';
    //for(int i=0;i<n;i++) cout<<s[i];
    int * tree=new int[4*n]{0};
    build(s,tree,0,n-1,1);
    for(int i=0;i<q;i++){
    	if(w[i][0]==1) update(tree,0,n-1,1,w[i][1]);
    	else cout<<query(tree,0,n-1,1,w[i][1],w[i][2])<<endl;
        /*for(int i=1;i<4*n;i++) cout<<tree[i]<<" ";
    	cout<<endl;*/
	}
    
}
