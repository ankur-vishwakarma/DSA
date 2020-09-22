#include<bits/stdc++.h>
using namespace std;
void build(int *a,int *b,int strt,int end,int *tree,int node){
	if(strt==end){
		tree[node]=strt;
		return;
	}
	int m=(strt+end)/2;
	build(a,b,strt,m,tree,2*node);
	build(a,b,m+1,end,tree,2*node+1);
	int a1=a[tree[2*node]],a2=a[tree[2*node+1]],b1=b[tree[2*node]],b2=b[tree[2*node+1]];
	if(a1>a2) tree[node]=tree[2*node];
	else if(a2>a1) tree[node]=tree[2*node+1];
	else{
		if(b1<b2) tree[node]=tree[2*node];
		else if(b2<b1) tree[node]=tree[2*node+1];
		else tree[node]=tree[2*node];
	}
}
int query(int *a,int *b,int *tree,int strt,int end,int node,int l,int r){
	//if(strt==end) return tree[node];
	if(l>end||r<strt) return 0;
	if(strt>=l&&end<=r) return tree[node];
	int m=(strt+end)/2;
	int left=query(a,b,tree,strt,m,2*node,l,r);
	int right=query(a,b,tree,m+1,end,2*node+1,l,r);
	int a1=a[left],a2=a[right],b1=b[left],b2=b[right];
	if(left==0) a1=INT_MIN,b1=INT_MAX;
	if(right==0) a2=INT_MIN,b2=INT_MAX;
	//cout<<strt<<" "<<end<<" "<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<endl;
	if(a1>a2) return left;
	else if(a2>a1) return right;
	else{
		if(b1<b2) return left;
		else if(b2<b1) return right;
		else return left;
	}
}
main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	int q;
	cin>>q;
	int s[q][2];
	for(int i=0;i<q;i++) cin>>s[i][0]>>s[i][1],s[i][0]--,s[i][1]--;
	int *tree=new int[4*n]{0};
	build(a,b,0,n-1,tree,1);
	//for(int i=1;i<3*n;i++) cout<<tree[i]<<" ";
	//ans += 1
	for(int i=0;i<q;i++){
		cout<<query(a,b,tree,0,n-1,1,s[i][0],s[i][1])+1<<endl;
	}
}
/*
5
1 8 4 6 8
4 8 6 3 7
1
3 4
*/
