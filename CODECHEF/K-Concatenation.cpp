#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		//apply kadanes on a (also try to keep the position where u found max sum)
		long long maxsum=0,cursum=0,l=0,ll=-1,rr=-1;
		for(int i=0;i<n;i++){
			cursum+=a[i];
			if(cursum<0) l=i+1,cursum=0;
			if(cursum>maxsum){
				maxsum=cursum;
				ll=l,rr=i;
			}
		}
		//cout<<ll<<" "<<rr<<endl;
		if(maxsum==0) cout<<maxsum<<endl;   //if all negatives
		else if(ll==0&&rr==n-1) cout<<maxsum*k<<endl; //whole array included
		else if(ll>0&&rr<n-1) cout<<maxsum<<endl;  //maxsum in middle
		else{
			//max sum on sides
			if(k<=1) cout<<maxsum<<endl;
			else{
				long long b[n];
				for(int i=0;i<n;i++) b[i]=a[i];
				for(int i=n;i<2*n;i++) b[i]=a[i-n];
				//again apply kadanes
				long long cs=0,ms=0;
				for(int i=0;i<2*n;i++){
					cs+=b[i];
					if(cs<0) cs=0;
					if(cs>ms) ms=cs;
				}
				cout<<ms<<endl;
			}
		}
	}
}
