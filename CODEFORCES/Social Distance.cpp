#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int ones[n],pos=-1;
		for(int i=n-1;i>=0;i--){
			//cout<<pos<<" ";
			if(s[i]=='1') ones[i]=0,pos=0;
			else{
				if(pos==-1) ones[i]=-1;
				else ones[i]=++pos;
			}
			//cout<<ones[i]<<" ";
		}
		//cout<<endl;
		//for(int i=0;i<n;i++) cout<<ones[i]<<" ";
		int ppl=0;
		for(int i=0;i<n;){
		//	cout<<i<<" ";
			if(s[i]=='0'){
				if(ones[i]>k||ones[i]==-1) i+=(k+1),ppl++;
				else i++;
			}
			else i+=(k+1);
		}
		cout<<ppl<<endl;
	}
}
