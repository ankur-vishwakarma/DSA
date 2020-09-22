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
		int ss[n],tt[n];
		for(int i=0;i<n;i++){
			if(s[i]=='1') ss[i]=1;
			else ss[i]=0;
			if(t[i]=='1') tt[i]=1;
			else tt[i]=0;
		}
		int p1=0,p2=n-1,p3=n-1;
		vector<int> op;
		int ops=0;
		while(n>0){
			if(!ops) while(ss[p3]==tt[p2]&&p2>=0) p2--,p3--,n--;
			else while(1-ss[p3]==tt[p2]&&p2>=0) p2--,p3++,n--;
			if(p2<0) break;
			if((!ops&&ss[p1]==tt[p2])||(ops&&1-ss[p1]==tt[p2])) op.push_back(1);
			if(!ops) p1++;
			else p1--;
			swap(p1,p3);
			p2--;
			ops=1-ops;
			op.push_back(n);
			n--;
		}
		cout<<op.size()<<" ";
		for(int i=0;i<op.size();i++) cout<<op[i]<<" ";
		cout<<endl;
	}
}
