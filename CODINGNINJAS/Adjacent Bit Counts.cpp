#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
void adjbits(int b,int c,vector<int> v,long long &count,long long &total){
	//for(int i=0;i<v.size();i++) cout<<v[i];
	//cout<<" "<<count<<endl;
	if(v.size()==b){
		if(count==c) total++;
		total=total%m;
		return;
	}
	if(v.size()==0){
		v.push_back(0);
		adjbits(b,c,v,count,total);
		v.pop_back();
		v.push_back(1);
		adjbits(b,c,v,count,total);
		return;
	}
	v.push_back(0);
	adjbits(b,c,v,count,total);
	v.pop_back();
	if(v[v.size()-1]==1) count++;
	v.push_back(1);
	adjbits(b,c,v,count,total);
	v.pop_back();
	if(v[v.size()-1]==1) count--;
	return;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		vector<int> v;
		long long count=0,total=0;
		adjbits(b,c,v,count,total);
		cout<<total<<endl;
	}
}
