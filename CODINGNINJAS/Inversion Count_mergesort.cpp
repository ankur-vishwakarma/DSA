#include<bits/stdc++.h>
using namespace std;
long long inv=0;
void merge(int *s,int strt,int end){
	int mid=(strt+end)/2;
	int i=strt,j=mid+1,k=0;
	int tmp[end-strt+1];
	while(i<=mid&&j<=end){
		if(s[i]<=s[j]){
			tmp[k]=s[i];
			i++,k++;
		}
		else{  //inversion
			inv+=(mid-i+1);  //cross check
			//cout<<inv<<" "<<s[j]<<endl;
			tmp[k]=s[j];
			j++,k++;
		}
	}
	while(i<=mid) tmp[k]=s[i],i++,k++;
	while(j<=end) tmp[k]=s[j],j++,k++;
	for(int i=strt;i<=end;i++) s[i]=tmp[i-strt];
}
void merge_sort(int *s,int strt,int end){
	if(strt>=end) return;
	int mid=(strt+end)/2;
	merge_sort(s,strt,mid);
	merge_sort(s,mid+1,end);
	merge(s,strt,end);
}

main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	merge_sort(s,0,n-1);
	//for(int i=0;i<n;i++) cout<<s[i]<<" ";
	cout<<inv<<endl;
}
