#include<bits/stdc++.h>
using namespace std;
void buildST(int *s,int *tree,int strt,int end,int node){
	if(strt==end){
		tree[node]=pow(s[strt],2);
		return;
	}
	int mid=(strt+end)/2;
	buildST(s,tree,strt,mid,2*node);
	buildST(s,tree,mid+1,end,2*node+1);
	tree[node]=tree[2*node]+tree[2*node+1];
	return;
}
void update(int *tree,int *lazy,int strt,int end,int node,int type,int l,int r,int x){
	//do work if left frm previous
	if(lazy[node].first!=0||lazy[node].second!=0){
		//1 means add n 2 means set equal
		if(lazy[node].second==1){
			tree[node]+=pow(lazy[node].first,2);
		}
		else{
			tree[node]=pow(lazy[node].first,2);
		}
		//update in child
		if(strt!=end){
			lazy[2*node].first=lazy[2*node+1].first=lazy[node].first;
			lazy[2*node].second=lazy[2*node+1].second=lazy[node].second;
		}
		//set values to 0
		lazy[node].first=lazy[node].second=0;
	}
	//current work
	//3 cases 1.out 2.complte 3.partial
	if(l>end||r<strt) return;
	if(l<=strt&&r>=end){
		if(type==0){
			tree[node]=pow(x,2);
			if(strt!=end){
				lazy[2*node].first=lazy[2*node+1].first=x;
				lazy[2*node].second=lazy[2*node+1].second=2;
			}
		}
		else{
			tree[node]+=x;
		}
	}
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        int **w =new int *[q];
        for(int i=0;i<q;i++) w[i]=new int[4];
        for(int i=0;i<q;i++){
            cin>>w[i][0];
            if(w[i][0]==2) cin>>w[i][1]>>w[i][2];
            else cin>>w[i][1]>>w[i][2]>>w[i][3];
        }
        int *tree=new int[4*n]{0};
        pair<int,int> * lazy=new pair<int,int>[4*n]{0,0};
        buildST(s,tree,0,n-1,1);
        for(int i=0;i<4*n;i++) cout<<tree[i]<<" ";
    }
}
