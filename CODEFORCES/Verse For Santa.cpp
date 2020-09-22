#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		if(n==1&&s[0]>x){
			cout<<"0\n";
			continue;
		}
		ll sum=0;
		ll pos,max=INT_MIN;
		bool flag_removed=false;
		for(int i=0;i<n;i++){
			if(sum+s[i]<=x){
				sum+=s[i];
				if(s[i]>max) max=s[i],pos=i;
			}
			else{
				 //cout<<s[i]<<" "<<max<<"who\n";
				if(flag_removed) break;
				else{
					if(max==INT_MIN){
						max=s[i];
						pos=i;
						flag_removed=true;
					}
					else if(s[i]<=max){
						//cout<<s[i]<<endl;
						sum-=max;
						sum+=s[i];
						flag_removed=true;
					}
					else{
						pos=i;
						max=s[i];
						flag_removed=true;
					}
				}
				//cout<<s[i]<<"c"<<endl;
			}
			//cout<<pos<<" "<<s[i]<<" "<<flag_removed<<endl;
		}
		if(!flag_removed) cout<<"0\n";
		else cout<<pos+1<<endl;
	}
}
