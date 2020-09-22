#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int od;
		int ev;
};
void build(int *s,int l,int r,node *tree,int nd){
	if(l==r){
		if(s[l]%2==0) tree[nd].od=0,tree[nd].ev=1;
		else tree[nd].od=1,tree[nd].ev=0;
		return;
	}
	int m=(l+r)/2;
	build(s,l,m,tree,2*nd+1);
	build(s,m+1,r,tree,2*nd+2);
	tree[nd].od=tree[2*nd+1].od+tree[2*nd+2].od;
	tree[nd].ev=tree[2*nd+1].ev+tree[2*nd+2].ev;
}
void update(node *tree,int l,int r,int nd,int ind,int val,int *s){
	if(l==r){
		if(val%2==0) tree[nd].od=0,tree[nd].ev=1;
		else tree[nd].od=1,tree[nd].ev=0;
		s[ind]=val;
		return;
	}
	int m=(l+r)/2;
	if(ind<=m) update(tree,l,m,2*nd+1,ind,val,s); 
	else update(tree,m+1,r,2*nd+2,ind,val,s);
	tree[nd].od=tree[2*nd+1].od+tree[2*nd+2].od;
	tree[nd].ev=tree[2*nd+1].ev+tree[2*nd+2].ev;
	//cout<<nd<<" "<<tree[nd].ev<<" "<<tree[nd].od<<endl;
	return;
}
node query(node *tree,int l,int r,int s,int e,int nd){
	if(s>r||e<l){
		node a;
		a.ev=0,a.od=0;
		return a;
	}
	else if(s<=l&&e>=r) return tree[nd];
	int m=(l+r)/2;
	node a=query(tree,l,m,s,e,2*nd+1);
	node b=query(tree,m+1,r,s,e,2*nd+2);
	a.ev+=b.ev,a.od+=b.od;
	//cout<<nd<<" "<<a.od<<" "<<a.ev<<endl;
	return a;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int q;
	cin>>q;
	int t[q][3];
	for(int i=0;i<q;i++) cin>>t[i][0]>>t[i][1]>>t[i][2];
	node *tree=new node[3*n];
	build(s,0,n-1,tree,0);
	for(int i=0;i<q;i++){
		if(t[i][0]==0) update(tree,0,n-1,0,t[i][1]-1,t[i][2],s);
		else{
			if(t[i][0]==1) cout<<query(tree,0,n-1,t[i][1]-1,t[i][2]-1,0).ev<<endl;
			else cout<<query(tree,0,n-1,t[i][1]-1,t[i][2]-1,0).od<<endl;
		}
		//for(int i=0;i<3*n;i++) cout<<tree[i].od<<" "<<tree[i].ev<<endl;
		//for(int i=0;i<n;i++) cout<<s[i]<<" ";
		//cout<<endl;
	}
	/*for(int i=0;i<3*n;i++){
		cout<<tree[i].od<<" "<<tree[i].ev<<endl;
	}*/
}
