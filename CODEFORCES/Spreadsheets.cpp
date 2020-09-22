#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		int flag=0,sum=0;
		for(int j=1;s[i][j]!='\0';j++) if((s[i][j]>=48&&s[i][j]<=57)){
			flag=j+1;
			break;
		}
		int hold=flag;
		for(int j=flag;s[i][j]!='\0';j++) if((s[i][j]>=65&&s[i][j]<=90)){
			hold=j;
			break;
		}
		if(hold!=flag){
			cout<<sum<<"\n";
			int count=0;
			for(int j=hold+1;s[i][j]!='\0';j++) count++;
			for(int j=0;j<count;j++){
				int k=s[i][count+hold-j];
				sum=sum + pow(10,j) *k ;
				cout<<sum<<" "<<pow(10,j)<<" "<<s[i][count+hold-j]<<" "<<k<<"\n";
			}
		}
		cout<<sum;
	}
}
