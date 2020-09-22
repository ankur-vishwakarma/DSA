#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int flag=0;
		for(int i=0;i<n;i++){
			if(p%s[i]!=0){
				cout<<"YES ";
				for(int j=0;j<i;j++) cout<<"0 ";
				cout<<p/s[i]+1<<" ";
				for(int j=i+1;j<n;j++) cout<<"0 ";
				cout<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		if(n==2&&(s[0]==1||s[1]==1)){
			cout<<"NO\n";
			continue;
		}
		int a,b,ai,bi,i=0;
		if(s[i]==1) i++;
		a=s[i],ai=i,i++;
		if(s[i]==1) i++;
		b=s[i],bi=i,i++;
		int ma,mai,mi,mii;
		if(a>b) ma=a,mai=ai,mi=b,mii=bi;
		else ma=b,mai=bi,mi=a,mii=ai;
		cout<<"YES ";
		for(int i=0;i<n;i++){
			if(i==mai||i==mii){
				if(i==mai){
					cout<<"1 ";
				}
				else cout<<p/mi-1<<" ";
			}
			else cout<<"0 ";
		}
		cout<<endl;
	}
}
