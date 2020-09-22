#include<bits/stdc++.h>
using namespace std;
bool f(int a,int b){
	cout<<a<<" "<<b<<endl;
	if(b<0&&a>=0) return 1;
	return 0;
}
main(){
	int n;
	cin>>n;
	int s[n];
	vector<int> v;
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s, s+n, f);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
/* 9
12 11 -13 -5 6 -7 5 -3 -6 */
