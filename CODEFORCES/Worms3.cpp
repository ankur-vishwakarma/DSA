#include<bits/stdc++.h>
using namespace std;
main(){
	int n,t;
	cin>>n;
	int s[n],sum=0;
	for(int i=0;i<n;i++) cin>>s[i],sum+=s[i],s[i]=sum;
	cin>>t;
	int q[t];
	for(int i=0;i<t;i++) cin>>q[t];
	for(int i=0;i<t;i++){
		int st=0,e=n-1,fg=0,m;
	    while(st<e){
		m=(st+e)/2;
		cout<<s[st]<<" "<<s[m]<<" "<<s[e]<<endl;
		if(s[m]==q[i]){ cout<<m+1<<"\n",fg=1; break; }
		else if(s[m]<q[i]) e=m-1;
		else st=m+1;
	    }
	    if(fg!=1){
	    	m=(st+e)/2;
	    	if(q[i]>s[m]) cout<<m+2<<"\n";
	    	else if(q[i]<s[m]) cout<<m<<"\n";
	    	else cout<<m+1<<"\n";
		}
	}
}
/*  5
2 7 3 4 9
3
1 25 11
 */
