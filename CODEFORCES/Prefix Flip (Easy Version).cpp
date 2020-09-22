#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		int p1=0,p2=n-1,p3=n-1;
		vector<int> op;
		int ops=0;
		int rev=0;
		while(n>0){
			while(s[p2]==t[p2]&&p2>=0) p2--,n--;
			if(p2<0) break;
			if(s[0]==t[p2]){
				if(s[0]=='0') s[0]='1';
				else s[0]='0';
				op.push_back(1);
			} 
		//	cout<<s<<" ";
			for(int i=0;i<n;i++){
				if(s[i]=='0') s[i]='1';
				else s[i]='0';
			}
		//	cout<<s<<" ";
			reverse(s.begin(),s.begin()+n);
			op.push_back(n);
			//cout<<s<<" ";
			//s=s.substr(0,n-1);
			//cout<<t<<endl;
		//	cout<<s<<endl;
			n--;
			p2--;
		}
		cout<<op.size()<<" ";
		for(int i=0;i<op.size();i++) cout<<op[i]<<" ";
		cout<<endl;
	}
}
