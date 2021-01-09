#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];

		unordered_map <int,int> lst;
		int min_d=INT_MAX;
		for(int i=0;i<n;i++){
			if(lst.find(s[i])!=lst.end()){
				int now=i-lst[s[i]]+1;
				//cout<<now<<endl;
				min_d=min(min_d,now);
			}
			lst[s[i]]=i;
		}
		lst.clear();
		if(min_d!=INT_MAX) cout<<min_d<<endl;
		else cout<<-1<<endl;
	}
}
