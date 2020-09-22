#include<bits/stdc++.h>
using namespace std;
void merge(int * s,int strt,int mid,int end){
	/*cout<<strt<<" "<<mid<<" "<<end<<endl;
	for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<endl;*/
	
	int tmp[end-strt+1],i=strt,j=mid+1,k=0;
	while(i<=mid&&j<=end){
		if(s[i]<s[j]) tmp[k++]=s[i++];
		else tmp[k++]=s[j++];
	}
	
	//cout<<i<<"i j"<<j<<endl;
	
	while(i<=mid) tmp[k++]=s[i++];
	while(j<=end) tmp[k++]=s[j++];
	
	/*for(int i=0;i<end-strt+1;i++) cout<<tmp[i]<<" ";
	cout<<endl;*/
	
	//copying tmp to s
	for(i=strt;i<=end;i++) s[i]=tmp[i-strt];
	
	/*for(int i=strt;i<=end;i++) cout<<s[i]<<" ";
	cout<<endl;*/
}
void merge_sort(int * s,int strt,int end){
	if(strt>=end) return;
	int mid=(strt+end)/2;
	merge_sort(s,strt,mid);
	merge_sort(s,mid+1,end);
	merge(s,strt,mid,end);
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	merge_sort(s,0,n-1);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
