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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	//one case sorted backwards then only cnt be
	int flag=0;
	for(int i=0;i<n-1;i++){
		if(s[i]>s[i+1]) continue;
		flag=1;
	}
	if(!flag) cout<<"NO\n";
	else cout<<"YES\n";
	/*inv=0;
	merge_sort(s,0,n-1);
	//for(int i=0;i<n;i++) cout<<s[i]<<" ";
	//cout<<inv<<endl;
	long long tt=(n*(n-1))/2-1;
	//cout<<tt<<endl;
	if(inv>tt) cout<<"NO\n";
	else cout<<"YES\n";*/
	}
}
