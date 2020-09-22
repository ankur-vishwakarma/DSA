#include<bits/stdc++.h>
using namespace std;
main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int s[n],count=0;
	for(int i=0;i<n;i++) scanf("%d",&s[i]);
	for(int i=0;i<n;i++){
		if(s[i]%k==0) count++;
	}
	printf("%d",count);
}
