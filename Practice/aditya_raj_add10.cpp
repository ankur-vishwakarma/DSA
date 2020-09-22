#include<bits/stdc++.h>
using namespace std;
void add_recur(int * s,int n,vector<int> &a,int i=0,int j=1,int k=2,int l=3){
	if(i==n) return;
	if(j==n){
		add_recur(s,n,a,i+1,i+2,i+3,i+4);
		return;
	}
	if(k==n){
		add_recur(s,n,a,i,j+1,j+2,j+3);
		return;
	}
	if(l==n){
		add_recur(s,n,a,i,j,k+1,k+2);
		return;
	}
	a.push_back(s[i]+s[j]+s[k]+s[l]);
	add_recur(s,n,a,i,j,k,l+1);
}
void add_itr(int *s,int n,vector<int> &a){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				for(int l=k+1;l<n;l++){
					a.push_back(s[i]+s[j]+s[k]+s[l]);
				}
			}
		}
	}
}
main(){
	int s[10]={1,2,3,4,5,6,7,8,9,10};
	vector<int> a;
	//recursive
	add_recur(s,10,a);
	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
	a.clear();
	//iterative
	add_itr(s,10,a);
	cout<<endl;
	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
}
