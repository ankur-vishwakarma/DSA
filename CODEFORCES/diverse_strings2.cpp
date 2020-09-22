#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		int flag=0;
sort(s[i].begin(),s[i].end());
//cout<<s[i]<<endl;
for(int j=0;j<s[i].length()-1;j++){
	if(s[i][j+1]-s[i][j]!=1){ cout<<"NO\n",flag=1; break; }
}
if(flag!=1) cout<<"YES\n";
}}
