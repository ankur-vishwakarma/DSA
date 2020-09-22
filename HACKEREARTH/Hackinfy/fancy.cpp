#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> factors(int n) {
vector<int> f;
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
f.push_back(x);
n /= x;
}
}
if (n > 1) f.push_back(n);
return f;
}
int dp[1000]={0};
int minDistance(vector<int> target){
	sort(target.begin(),target.end());
	int bal=0;
	//vector<int> fancy;
	for(int i=0;i<target.size();i++){
		//cout<<target[i]<<"t "<<bal<<endl;
		//keep checking behind n forward one by one
		int j=target[i],ind=0;
		while(j-ind>0&&j+ind<1000){
			//cout<<j-ind<<" "<<j+ind<<endl;
			if(!dp[j-ind]){
				int flag=0;
				vector<int> facs=factors(j-ind);
			    for(int k=0;k<facs.size();k++) if(dp[facs[k]]==1){ flag=1; break; }
			    if(flag!=1){
			    	dp[j-ind]=1;
			    	//fancy.push_back(j-ind);
			    	int l=abs(target[i]-(j-ind));
			    	bal+=l;
			    	break;
				}
			}
			if(!dp[j+ind]){
				int flag=0;
				vector<int> facs=factors(j+ind);
			    for(int k=0;k<facs.size();k++) if(dp[facs[k]]==1){ flag=1; break; }
			    if(flag!=1){
			    	//fancy.push_back(j+ind);
			    	dp[j+ind]=1;
			    	int l=abs(target[i]-(j+ind));
			    	bal+=l;
			    	break;
				}
			}
			ind++;
		}
	}
	//for(int i=0;i<fancy.size();i++) cout<<fancy[i]<<" ";
	return bal;
}
main(){
	int n,a;
	cin>>n;
	vector<int> t;
	for(int i=0;i<n;i++) cin>>a,t.push_back(a);
	cout<<minDistance(t);
}
/* 5 1 6 4 2 8
if(!dp[target[i]]){
			int flag=0;
			vector<int> facs=factors(target[i]);
			for(int k=0;k<facs.size();k++) if(dp[k]==1){ flag=1; break; }
			if(flag!=1){
				dp[target[i]]=1;
				continue;
			}
		}
*/
