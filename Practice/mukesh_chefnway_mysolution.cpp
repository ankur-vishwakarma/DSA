#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s+1,s+n-1);
	long long product=s[0];
	priority_queue<int,vector<int>,greater<int> > pq;
	for(int i=0;i<n-1;i++){
		//check if u can directly go to last city
		if(s[n-1]-s[i]>=1&&s[n-1]-s[i]<=k){
			product=(product%m * s[n-1]%m)%m;
			break;
		}
		//try to go to next city with minimum value
		//so lets include product that we need to do to go to tht city
		product=(product%m * s[i+1]%m)%m;
	}
	cout<<product;
}
