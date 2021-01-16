#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n,k;
	cin>>n;
	int s[2*n];
	for(int i=0;i<2*n;i++) cin>>s[i];
	vector<int> ans;
	int nn=n;
	while(nn--){
		int a,b,cur=0;
		for(int i=0;i<2*n;i++){
			if(s[i]==-1) continue;
			for(int j=i+1;j<2*n;j++){
				if(s[j]==-1) continue;
				int g=__gcd(s[i],s[j]);
				if(g>cur) cur=g,a=i,b=j;
			}
		}
		ans.push_back(cur),s[a]=-1,s[b]=-1;
	}
	
	sort(ans.begin(),ans.end());
	ll f=0;
	for(int i=0;i<n;i++) f+=((i+1)*ans[i]);
	cout<<f<<endl;
}
