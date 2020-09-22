#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m],c[n],bm=INT_MAX;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i],bm=min(bm,b[i]);
	
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int cc=a[i]&b[0];
		for(int j=1;j<m;j++) cc=min(cc,a[i]&b[j]);
		c[0]=cc;
		//cout<<c[0]<<endl;
		int l=1;
		for(int j=0;j<n;j++){
			if(i==j) continue;
			c[l]=INT_MAX;
			for(int k=0;k<m;k++){
				c[l]=min(c[l],(c[l-1]|(a[j]&b[k])));
			}
			l++;
		}
		ans=min(ans,c[n-1]);
	}
	cout<<ans<<endl;
}
