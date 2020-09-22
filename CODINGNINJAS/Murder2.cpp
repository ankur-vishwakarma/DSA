#include<bits/stdc++.h>
using namespace std;
void merge(int *s,int strt,int end,long long &count){
	cout<<strt<<"s e"<<end<<endl;
	int mid=(strt+end)/2;
	int sz=end-strt+1;
	int t[sz];
	int i=strt,j=mid+1,k=0;
	while(i<=mid&&j<=end){
		if(s[i]<s[j]){
			count+=(((mid-i)+(end-j))*s[i]);
			cout<<(mid-i)+(end-j+1)<<" "<<s[i]<<endl;
			t[k]=s[i];
			i++,k++;
		}
		else if(s[j]<s[i]){
			count+=((end-j)*s[j]);
			cout<<(end-j)<<" "<<s[j]<<endl;
			t[k]=s[j];
			j++,k++;
		}
		else{ //when equal doesnt matters
			t[k++]=s[i++];
		}
	}
	while(i<=mid) t[k]=s[i],i++,k++;
	while(j<=end) t[k]=s[j],j++,k++;
    for(i=0;i<sz;i++) s[i+strt]=t[i];
}
void ms(int *s,int strt,int end,long long &count){
	if(end<=strt) return;
	int mid=(strt+end)/2;
	ms(s,strt,mid,count);
	ms(s,mid+1,end,count);
	merge(s,strt,end,count);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		long long count=0;
		ms(s,0,n-1,count);
		cout<<count<<endl;
	}
}
