#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> a,vector<int> b){
	int n=a.size();
	int mp[n+1];
	for(int i=0;i<n;i++) mp[a[i]]=i;
	int count=0;
	for(int i=0;i<n;){
		cout<<i<<endl;
		count++;
		int pos=mp[b[i]];
		while(pos<n&&i<n&&b[i]==a[pos]) i++,pos++;
		//i++;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	cout<<fun(a,b);
	return 0;
}
