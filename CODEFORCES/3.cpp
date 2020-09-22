#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int n,q;
	cin>>n>>q;
	int s[n],t[q];
	for(int i=0;i<n;i++) cin>>s[i];
 for(int i=0;i<q;i++) cin>>t[i];
 sort(s,s+n);
// for(int i=0;i<n;i++) cout<<s[i];
 for(int i=0;i<q;i++){
	 int beg=0,end=n-1,flag=0;
	 while(beg<=end){
		 int mid=(beg+end)/2;
		// cout<<beg<<" "<<mid<<" "<<end<<endl;
		 if(s[mid]==t[i]){ cout<<"YES\n",flag=1; break; }
		 else if(t[i]<s[mid]) end=mid-1;
		 else beg=mid+1;
	 }
	 if(flag!=1) cout<<"NO\n";
			 }
			 }

