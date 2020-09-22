#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		char c;
		for(int i=0;i<n;i++) cin>>c,a[i]=c-97;
		for(int i=0;i<n;i++) cin>>c,b[i]=c-97;
		int flag=0;
		set<int> m[20];
		for(int i=0;i<n;i++){
			if(b[i]<a[i]){
				flag=1;
				cout<<"-1\n";
				break;
			}
			m[a[i]].insert(b[i]);
		}
		if(flag) continue;
		flag=0;
		int count=0;
		for(int i=0;i<20;i++){
			//cout<<i<<endl;
			//for(auto itr=m[i].begin();itr!=m[i].end();itr++) cout<<*itr<<" ";
			for(auto itr=m[i].begin();itr!=m[i].end();itr++){
				//cout<<*itr<<"i\n";
				if(*itr<i){
					flag=1;
					cout<<"-1\n";
					break;
				}
				if(*itr==i) continue;
				count++;
				//itr++;
				for(auto itr2=itr;itr2!=m[i].end();itr2++) m[*itr].insert(*itr2);
				break;
			}
			if(flag) break;
		}
		if(flag) continue;
		cout<<count<<endl;
	}
}
