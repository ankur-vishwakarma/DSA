#include<bits/stdc++.h>
using namespace std;
long long total=0;
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
			total+=((mid-i+1)*s[j]);  //COUNTED THOSE WHICH WILL NOT BE INCLUDED IN SUM
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
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	merge_sort(s,0,n-1);
	long long sum=0;
	for(int i=0;i<n;i++) sum+=(s[i]*(n-(i+1)));
	//lets count same;
	vector<pair<int,int> > sames;
	for(int i=0;i<n-1;){
		if(s[i]==s[i+1]){
			int count=0;
			while(s[i]==s[i+1]) i++,count++;
			sames.push_back({s[i],count});
		}
		else i++;
	}
	long long kk=0;
	for(int i=0;i<sames.size();i++){
		//cout<<sames[i].first<<" "<<sames[i].second<<endl;
		int k=sames[i].second;
		kk+=(sames[i].first*(k*(k+1))/2);
	}
	//cout<<kk<<endl;
	sum-=kk;   //EXCLUDED THE DUPLICATES
	cout<<sum-total<<endl;
	total=0;
}
}
