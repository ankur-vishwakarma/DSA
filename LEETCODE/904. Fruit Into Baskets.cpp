#include<bits/stdc++.h>
using namespace std;
int totalFruit(vector<int>& tree) {
    map<int,int> m;
    int count=0,ans=0;
    for(int i=0;i<tree.size();i++){
    	//cout<<tree[i]<<" "<<m.size()<<endl;
    	if(m.size()==1||m.size()==0){
    		m[tree[i]]++;
    		count++;
    		ans=max(ans,count);
    		continue;
		}
		//cout<<"in ";
		m[tree[i]]++;
		count++;
		if(m.size()==3){
			m.clear(); count=0;
			for(int j=i;j>=0;j--){
				//int a = m[tree[j]];
				//cout<<a<<"aaa\n";//m.find(tree[j])==m.end()
				if(m.size()==2&&m.find(tree[j])==m.end()) break;
				m[tree[j]]++;
				count++;
			}
		}
		//cout<<m.size()<<"m c"<<count<<endl;
		ans=max(ans,count);
	}
	return ans;
}
main(){
	int n,s;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) cin>>s,v.push_back(s);
	cout<<totalFruit(v);
}
