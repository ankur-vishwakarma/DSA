#include<bits/stdc++.h>
using namespace std;
bool sub_sum(vector<int> grps,int n){
	bool dp[2][n+1];
	dp[0][0]=true;
	for(int i=1;i<=n;i++) dp[0][i]=false;
	int flag=1;
	for(int i=1;i<=grps.size();i++){
		for(int j=1;j<=n;j++){
			dp[flag][j]=dp[flag^1][j];
			//cout<<grps[i-1]<<" ";
			if(j-grps[i-1]>=0) dp[flag][j]=dp[flag][j]||dp[flag^1][j-grps[i-1]];
			//cout<<j<<" "<<dp[flag][j]<<endl;
		}
		//for(int j=0;j<=n;j++) cout<<dp[flag][j]<<" ";
		//cout<<endl;
		flag=flag^1;
	}
	return dp[flag^1][n];
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[2*n+1];
		for(int i=0;i<2*n;i++) cin>>s[i];
		vector<int> grps;
		int cnt=1,cur=s[0];
		//s[2*n]=(2 * n + 1);
		for(int i=1;i<2*n;i++){
			if(s[i]<cur) cnt++;
			else{
				grps.push_back(cnt);
				cnt=1;
				cur=s[i];
			}
		}
		grps.push_back(cnt);
		/*sort(grps.begin(),grps.end(),greater<int>());
		int sum=0;
		for(int i=0;i<grps.size();i++){
			if(sum+grps[i]<=n) sum+=grps[i];
		}*/
		//subset sum
		//for(int i=0;i<grps.size();i++) cout<<grps[i]<< " ";
		bool ans=sub_sum(grps,n);
		if(ans) cout<<"YES\n";
		else cout<<"NO\n";
		/*int s1=n,s2=n;
		vector<int> v1,v2;
		int i=0,flag=0;
		while(s1>0||s2>0){
			int j=i+1;
			while(j<2*n&&s[i]>s[j]) j++;
			int sz=j-i;
			//cout<<s1<<" "<<s2<<" "<<sz<<endl;
			//cout<<sz<<endl;
			if(sz>s1&&sz>s2){
				flag=1;
				break;
			}
			else if(sz>s1){
				for(int k=i;k<j;k++) v2.push_back(s[k]),s2--;
			}
			else if(sz>s2){
				for(int k=i;k<j;k++) v1.push_back(s[k]),s1--;
			}
			else{
				if(s1<s2){
					for(int k=i;k<j;k++) v1.push_back(s[k]),s1--;
				}else{
					for(int k=i;k<j;k++) v2.push_back(s[k]),s2--;
				}
			}
			i=j;
		}
		if(s2==0&&s1==0) cout<<"YES\n";
		else cout<<"NO\n";
		for(int k=0;k<v1.size();k++) cout<<v1[k]<<" ";
		cout<<endl;
		for(int k=0;k<v2.size();k++) cout<<v2[k]<<" ";
		cout<<endl;
		cout<<i<<endl;
		if(flag&&){
			cout<<"NO\n";
			continue;
		}
		while(s1>0) v1.push_back(s[i]),i++,s1--;
		while(s2>0) v2.push_back(s[i]),i++,s2--;
		//merge
		vector<int> t;
		int k=0,j=0;
		for(int i=0;i<2*n;i++){
			if(j>=n) t.push_back(v2[k]),k++;
			else if(k>=n) t.push_back(v1[j]),j++;
			else if(v1[j]<v2[k]) t.push_back(v1[j]),j++;
			else t.push_back(v2[k]),k++;
		}
		flag=0;
		for(int i=0;i<2*n;i++){
			if(s[i]!=t[i]){
				flag=1;
				break;
			}
		}
		if(flag) cout<<"NO\n";
		else cout<<"YES\n";*/
	}
}
