#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	long long t[n],s[n];
	for(int i=0;i<n;i++) cin>>t[i],s[i]=t[i];
	int i=0,j=n-1;
	int a=0,b=0;
	/*while(i<=j){
		if(i==j){
			if(s[i]==t[i]) a++;
			else b++;
			break;
		}
		s[i]--,t[j]--;
		
	}*/
	int at=0,bt=0,tt=0;
	while(i<j){
		tt++;
		long long cn_eat=min(s[i],s[j]);
		s[i]-=cn_eat;
		s[j]-=cn_eat;
		if(s[i]==0) i++,a++,at=tt;
		if(s[j]==0) j--,b++,bt=tt;
		//cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<" "<<a<<" "<<b<<endl;
	}
	if(i==j){
			if(s[i]==t[i]) a++;
			else{
				if(at<bt) a++;
				else b++;
			}
	}
	cout<<a<<" "<<b<<endl;
}
