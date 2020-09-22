#include<bits/stdc++.h>
using namespace std;
class qry{
	public:
		int l,r,index;
};
bool comp(qry &a,qry & b){
	if(a.r==b.r) return a.l<b.l;
	return a.r<b.r;
}
void update(int ind,int * fnwk,int n){
	for(int i=ind;i<=n;i+=(i&(-i)))
		fnwk[i]++;
}
void counter_update(int ind,int *fnwk,int n){
	for(int i=ind;i<=n;i+=(i&(-i)))
		fnwk[i]--;
}
int query(int ind,int *fnwk){
	int count=0;
	for(int i=ind;i>0;i-=(i&(-i)))
		count+=fnwk[i]/*,cout<<i<<"i c"<<count<<endl*/;
	return count;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int q;
	cin>>q;
	qry t[q];
	for(int i=0;i<q;i++) cin>>t[i].l>>t[i].r,t[i].index=i;
	sort(t,t+q,comp);
	int * fnwk=new int[n+1]{0};
	int j=0;
	map <int,int> lstpos;
	int ans[q];
	for(int i=0;i<n;i++){
		update(i+1,fnwk,n);
		if(lstpos[s[i]]){
			counter_update(lstpos[s[i]],fnwk,n);
		}
		lstpos[s[i]]=i+1;
		for(int i=1;i<=n;i++) cout<<fnwk[i]<<" ";
		cout<<endl;
		while(t[j].r==i+1){
			int right=query(t[j].r,fnwk);
			int left=query(t[j].l,fnwk);
			if(left>0) left--;
			ans[t[j].index]=right-left;
			//cout<<t[j].l<<" "<<t[j].r<<" "<<right<<" "<<left<<endl;
			j++;
		}
	}
	for(int i=0;i<q;i++) cout<<ans[i]<<endl;
}
