#include<bits/stdc++.h>
using namespace std;
void build(int * s,int n,int * tree,int start,int end,int node){
    if(start==end){
        tree[node]=s[start];
        return;
    }
    int mid=(start+end)/2;
    build(s,n,tree,start,mid,2*node+1);
    build(s,n,tree,mid+1,end,2*node+2);
    tree[node]=tree[2*node+1]+tree[2*node+2];
    return;
}
void update(int * tree,int start,int end,int node,int idx,int value){
    if(start==end){
    	//cout<<value<<" "<<node<<endl;
        tree[node]=value;
        return;
    }
    int mid=(start+end)/2;
    if(idx<=mid) update(tree,start,mid,2*node+1,idx,value);
    else update(tree,mid+1,end,2*node+2,idx,value);
    tree[node]=tree[2*node+1]+tree[2*node+2];
    return;
}
int query(int * tree, int start,int end,int node,int l,int r){
	if(l>end||r<start) return 0;
	if((l==start&&r==end)||start==end) return tree[node]; //this line error
	int mid=(start+end)/2;
	int la=query(tree,start,mid,2*node+1,l,r);
	int lr=query(tree,mid+1,end,2*node+2,l,r);
	return la+lr;
}
int main() {

	int n,q;
    cin>>n>>q;
    int s[n],tree[4*n]={0};
    vector <pair<char,pair<int,int> > > v;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<q;i++){
        char a; int b,c;
        cin>>a>>b>>c;
        v.push_back({a,{b,c}});
    }
    build(s,n,tree,0,n-1,0);
    //for(int i=0;i<4*n;i++) cout<<tree[i]<<" ";
    //cout<<endl;
    update(tree,0,n-1,0,2,10);
    for(int i=0;i<4*n;i++) cout<<tree[i]<<" ";
    cout<<query(tree,0,n-1,0,2,4);
}
/*
5 5
1 5 2 4 3
q 1 5
q 1 3
q 3 5
u 3 6
q 1 5
*/
