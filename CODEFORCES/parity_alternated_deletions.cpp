#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n],o=0,e=o;
	for(int i=0;i<n;i++){
	       	cin>>s[i];
		if(s[i]%2==0) e++;
		else o++;
	}
	if(o-e==0||o-e==1||e-o==1) cout<<"0";
	else{
		sort(s,s+n);
		int j=0,k=n-1,sum=0;
			if(o>e){
				while(o!=e+1&&j<n){
				       	if(s[j]%2!=0) sum+=s[j],o--;
					j++;
				}
				cout<<sum;
			}
		        else{
				while(e!=o+1&&j<n){
				       	if(s[j]%2==0) sum+=s[j],e--;
					j++;
				}
				cout<<sum;
			}
	}
}

	
