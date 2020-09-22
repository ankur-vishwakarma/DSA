#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		int same=0,cur=0,same_e;
		for(int i=0;i<n-1;i++){
			while(s[i]==s[i+1]&&i+1<n) cur++,i++;
			if(cur>=same) same=cur+1,same_e=s[i];
			cur=0;
		}
		set<int> k;
		for(int i=0;i<n;i++) if(s[i]!=same_e) k.insert(s[i]);
		int dist=k.size();
		if(dist==same) cout<<same<<endl;
		else if(dist>same) cout<<same<<endl;
		else{
			if(same-1>=dist+1) cout<<dist+1<<endl;
			else cout<<dist<<endl;
		}
	}
}
