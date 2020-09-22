#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int z=0;
		vector<char> ans;
		while(s[z]=='0'&&z<s.size()) ans.push_back(s[z]),z++;
		int lstpos=z,lstpush=z-1;
		for(int i=z+1;i<s.size();i++){
			if((s[lstpos]-48)%2!=(s[i]-48)%2){
				
				//search
				int flag=i;
				for(int j=lstpos;j<i;j++){
					if(s[j]!='$'&&(s[j]-48)%2!=(s[i]-48)%2&&(s[j]-48)>(s[i]-48)){
						flag=j;
						break;
					}
				}
				/*for(int i=0;i<ans.size();i++) cout<<ans[i];
				cout<<endl;
				cout<<i<<"i f"<<flag<<endl;*/
				if(flag!=i){
					for(int j=lstpush+1;j<flag;j++) if(s[j]!='$') ans.push_back(s[j]);
					lstpush=flag-1;
					//need to swap
					ans.push_back(s[i]);
					s[i]='$';
					lstpos=flag;
				}
				else{
					for(int j=lstpush+1;j<i;j++) if(s[j]!='$') ans.push_back(s[j]);
					lstpush=i-1;
					lstpos=i;
				}
			}
		}
		for(int i=lstpush+1;i<s.size();i++) if(s[i]!='$') ans.push_back(s[i]);
		for(int i=0;i<ans.size();i++) cout<<ans[i];
		cout<<endl;
	}
}
