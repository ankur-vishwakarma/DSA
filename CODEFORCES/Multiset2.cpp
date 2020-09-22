#include<bits/stdc++.h>
using namespace std;
int * fnwk,*s;
void update(int ind,int val){
	for(;ind<=1000001;ind+=(ind&(-ind))){
		//cout<<ind<<endl;
		fnwk[ind]+=val;
	}
}
int query(int ind){
	int ans=0;
	for(;ind>0;ind-=(ind&-ind)){
		ans+=fnwk[ind];
	}
	return ans;
}
main(){
	int n,q,a;
	cin>>n>>q;
	s=new int[1000011]{};
	for(int i=0;i<n;i++) cin>>a,s[a]++;
	fnwk=new int[1000011]{};
	for(int i=1;i<1000001;i++){
		if(s[i]!=0) update(i,s[i]);
	}
	for(int i=0;i<q;i++){
		cin>>a;
		if(a>0){
			int index=query(a);
			if(index<1000001) s[index]++;
			update(a,-1);
		}
		else{
			a=-1*a;
			int index=query(a);
			if(index<1000001) s[index]--;
			update(a,1);
		}
	}
	int flag=0;
	for(int i=1;i<1000001;i++){
		if(s[i]>0){
			flag=i;
			break;
		}
	}
	cout<<flag;
}
