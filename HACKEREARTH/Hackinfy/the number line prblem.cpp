#include<bits/stdc++.h>
using namespace std;
main(){
	int n,c,k;
	cin>>n>>c>>k;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	int cnt=1,jar=1;
	for(int i=0;i<n-1;i++){
		if(s[i+1]-s[i]>k){
			cnt++;
			continue;
		}
		jar++;
		if(jar==c) cnt++,jar=1,i++;
	}
	if(s[n-1]-s[n-2]>k||jar>=c) cnt++;
	cout<<cnt;
}
/*
5 3 5
1 2 3 6 12
*/
