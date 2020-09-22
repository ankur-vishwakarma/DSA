#include<bits/stdc++.h>
using namespace std;
bool check_pal(long p){
	//cout<<p<<endl;
	vector<int> v;
	while(p!=0){
		v.push_back(p%10);
		p/=10;
	}
	for(int i=0;i<v.size()/2;i++){
		//cout<<v[i]<<" "<<v[v.size()-1-i]<<endl;
		if(v[i]!=v[v.size()-1-i]) return false;
	}
	return true;
}
main(){
	long m=0;
	for(int n=999;n>=100;n--){
		for(int i=999;i>=100;i--){
		long p=n*i;
		if(check_pal(p)) m=max(m,p);
    	}
	}
	cout<<m;
}
