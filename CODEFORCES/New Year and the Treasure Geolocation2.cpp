#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s[n][2],t[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	for(int i=0;i<n;i++) cin>>t[i][0]>>t[i][1];
	if(n==1){
		cout<<s[0][0]+t[0][0]<<" "<<s[0][1]+t[0][1];
		return 0;
	}
	int r[n*n][2],k=0,flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			r[k][0]=s[i][0]+t[j][0],r[k][1]=s[i][1]+t[j][1];
			k++;
		}
	}
	//for(int i=0;i<n*n;i++) cout<<r[i][0]<<" "<<r[i][1]<<endl;
	for(int i=0;i<n*n-n;i++){
		cout<<i<<"i\n";
		if(i%n==0) flag+=n;
		cout<<flag<<"c\n";
		for(int j=flag;j<n*n;j++){
			//cout<<r[i][0]<<" "<<r[i][1]<<endl;
			//cout<<r[j][0]<<"j "<<r[j][1]<<endl;
			if(r[i][0]==r[j][0]&&r[i][1]==r[j][1]){
				cout<<r[i][0]<<" "<<r[i][1];
				return 0;
			}
		}
	}
}
