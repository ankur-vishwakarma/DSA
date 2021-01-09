#include<bits/stdc++.h>
using namespace std;
main(){
	string a,b;
	cin>>a>>b;
	vector<int> aa ,bb;
	for(int i=a.length()-1;i>=0;i--){
		aa.push_back(a[i]-'0');

	}
	//for(int i=0;i<aa.size();i++) cout<<aa[i];
	for(int i=b.length()-1;i>=0;i--){
		bb.push_back(b[i]-'0');
	}
	int l=max(a.length(),b.length());
	if(a.length()<l) for(int i=a.length();i<l;i++) aa.push_back(0);
	if(b.length()<l) for(int i=b.length();i<l;i++) bb.push_back(0);
	int c=0;
	vector<int> ans;
	for(int i=0;i<l;i++){
		int s=aa[i]+bb[i]+c;
		c=s/10;
		s=s%10;
		ans.push_back(s);
	}
	if(c>0) ans.push_back(c);
	for(int i=ans.size()-1;i>=0;i--) cout<<ans[i];
}
