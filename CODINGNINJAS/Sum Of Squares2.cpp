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
void update(int *tree,pair<int,int> *lazy,int strt,int end,int node,int type,int l,int r,int value){
	if(lazy[node].first!=0){
		//left frm previous so update (1 means add 2 means set)
		if(lazy[node].first==1) tree[node]+=lazy[node].second;
		else tree[node]=pow(lazy[node].second,2);
		//if child present thn set lazy
		if(strt!=end){
			lazy[2*node].first=lazy[2*node+1].first=lazy[node].first;
			lazy[2*node].second=lazy[2*node+1].second=lazy[node].second;
		}
		//set current t0 0
		lazy[node].first=lazy[node].second=0;
	}
	//now do the work current one== 3 cases
	if(l>end||r<strt) return;
	if(l>=strt&&end<=r){
		if(type==0){
			tree[node]=value;
			if(strt!=end){
				lazy[2*node].first=lazy[2*node+1].first=2;
			    lazy[2*node].second=lazy[2*node+1].second=value;
			}
		}
		else if(type==1){
			tree[node]+=value;
			if(strt!=end){
				lazy[2*node].first=lazy[2*node+1].first=1;
			    lazy[2*node].second+=value,lazy[2*node+1].second+=value;
			}
		}
		return;
	}
	int mid=(strt+end)/2;
	update(tree,lazy,strt,mid,2*node,type,l,r,value);
	update(tree,lazy,mid+1,end,2*node+1,type,l,r,value);
	tree[node]=tree[2*node]+tree[2*node+1];
	return;
}
int query(int *tree,pair<int,int> *lazy,int strt,int end,int node,int l,int r){
	if(lazy[node].first!=0){
		//left frm previous so update (1 means add 2 means set)
		if(lazy[node].first==1) tree[node]+=lazy[node].second;
		else tree[node]=lazy[node].second;
		//if child present thn set lazy
		if(strt!=end){
			lazy[2*node].first=lazy[2*node+1].first=lazy[node].first;
			lazy[2*node].second=lazy[2*node+1].second=lazy[node].second;
		}
		//set current t0 0
		lazy[node].first=lazy[node].second=0;
	}
	if(l>end||r<strt) return 0;
	if(l>=strt&&end<=r) return tree[node];
	int mid=(strt+end)/2;
	int left=query(tree,lazy,strt,mid,2*node,l,r);
	int right=query(tree,lazy,mid+1,end,2*node+1,l,r);
	return left+right;
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
            if(w[i][0]==2) cin>>w[i][1]>>w[i][2],w[i][1]--,w[i][2]--;
            else cin>>w[i][1]>>w[i][2]>>w[i][3],w[i][1]--,w[i][2]--;
        }
        int *tree=new int[4*n]{0};
        pair<int,int> * lazy=new pair<int,int>[4*n]; //type(1add,2set),value
        for(int i=0;i<4*n;i++) lazy[i].first=lazy[i].second=0;
        buildST(s,tree,0,n-1,1);
        //for(int i=1;i<4*n;i++) cout<<tree[i]<<" ";
        for(int i=0;i<q;i++){
        	if(w[i][0]==2){
        		int k=query(tree,lazy,0,n-1,1,w[i][1],w[i][2]);
        		cout<<k<<endl;
			}
        	else update(tree,lazy,0,n-1,1,w[i][0],w[i][1],w[i][2],w[i][3]);
        	for(int i=1;i<4*n;i++) cout<<tree[i]<<" ";
        	cout<<endl;
		}
    }
}
/*
1
4 5
1 2 3 4
2 1 4
0 3 4 1
2 1 4
1 3 4 1
2 1 4
*/
