#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n][2],t[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	for(int i=0;i<n;i++) cin>>t[i][0]>>t[i][1];
	int c=0,tx,ty,k=0,r[n][2],flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int co=i+j;
			if(co>n-1) co=co-n;
			//cout<<j<<" "<<co<<"\n";
			r[j][0]=s[j][0]+t[co][0];
			r[j][1]=s[j][1]+t[co][1];
		}
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				//cout<<r[j][0]<<" "<<r[k][0]<<" "<<r[j][1]<<" "<<r[k][1]<<"\n";
				if(r[j][0]!=r[k][0]||r[j][1]!=r[k][1]){
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			cout<<r[0][0]<<" "<<r[0][1];
			return 0;
		}
		flag=0;
	}
}
