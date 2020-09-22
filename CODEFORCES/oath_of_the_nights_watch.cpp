#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main(){
	int n,l;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)  cin>>l,v.push_back(l);
	sort(v.begin(),v.end());
	int count=0;
	for(int i=1;i<v.size()-1;i++)
		if(v[0]<v[i]&&v[v.size()-1]>v[i]) count++;
	cout<<count;
}
