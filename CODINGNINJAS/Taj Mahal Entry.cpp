#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int ans=INT_MAX,flag=-1;
	for(int i=0;i<n;i++){
		int a=s[i]-i,k=a/n;
        if(a<0) a=0;
		if(a%n!=0) k++;
		if(k<ans) ans=k,flag=i;
	}
	cout<<flag+1;
}
