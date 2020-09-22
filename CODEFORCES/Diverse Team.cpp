#include<iostream>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n],t[n][2],count=0,flag=0;
	for(int i=0;i<n;i++) cin>>s[i];
	t[0][0]=s[0],t[0][1]=1;
	for(int i=1;i<n&&count!=k-1;i++){
		for(int j=0;j<=count;j++){
			if(s[i]==t[j][0]){
				flag=1;
				break;
			}
		}
		if(flag!=1){
			 t[++count][0]=s[i];
			 t[count][1]=i+1;
		}
		flag=0;
	}
	if(count!=k-1) cout<<"NO";
	else{
		cout<<"YES"<<"\n";
		for(int i=0;i<=count;i++) cout<<t[i][1]<<" ";
	}
}
