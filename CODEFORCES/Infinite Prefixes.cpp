#include<bits/stdc++.h>
#define ll long long
using namespace std;
 void solve(string s,int n,int x) {
	int ans = 0;
	bool infAns = false;
	
	int cntZeros = (int)count(s.begin(), s.end(), '0');
	int total = cntZeros - (n - cntZeros);
	//cout<<total<<endl;
	int bal = 0;
	for(int i = 0; i < n; i++) {
		cout<<abs(x - bal) % abs(total)<<endl;
		if(total == 0) {
			if(bal == x)
				infAns = true;
		}
		
		else if(abs(x - bal) % abs(total) == 0) {
			
			if((x - bal) / total >= 0)
				ans++;
		}
		
		if(s[i] == '0')
			bal++;
		else
			bal--;
	}
	
	if(infAns) ans = -1;
	cout << ans << endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long l,x;
		cin>>l>>x;
		string s;
		cin>>s;
		
		//process s for each index
		ll bal[l+1],z=0,o=0,found_x=0,mx=INT_MIN;
		for(int i=0;i<l;i++){
			if(s[i]=='0') z++;
			else o++;
			ll b=z-o;
			if(b==x) found_x=1;
			mx=max(mx,b);
			bal[i]=b;
			//cout<<b<<" ";
		}
		if(bal[l-1]==0&&found_x){
			cout<<"-1\n";
			continue;
		}
		//cout<<bal[l-1]<<" ";
		//bal[j]+k*bal[l-1]=x
		ll count=0;
		if(x==0) count++;
		/*if(bal[l-1]==x||(bal[l-1]>=0&&x%bal[l-1]==0)) count++;
		if(bal[l-1]==0) bal[l-1]=1;*/
		//bal[l]=0;
		for(int i=0;i<l;i++){
			if(bal[l-1]!=0){
				if(abs(x-bal[i])%abs(bal[l-1])==0){
				if((x - bal[i]) / bal[l-1] >= 0) count++;
			}
			}
		}
		cout<<count<<endl;
	}
}
