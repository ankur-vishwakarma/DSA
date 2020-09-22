#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i][0]>s[j][0]){
				int tmp=s[i][0],temp=s[i][1];
				s[i][0]=s[j][0],s[i][1]=s[j][1];
				s[j][0]=tmp,s[j][1]=temp;
			}
			if(s[i][0]==s[j][0]&&s[i][1]>s[j][1]){
				int tmp=s[i][0],temp=s[i][1];
				s[i][0]=s[j][0],s[i][1]=s[j][1];
				s[j][0]=tmp,s[j][1]=temp;
			}
		}
	}
	int led=s[0][1];
	for(int i=1;i<n;i++){
		if(s[i][1]>=led) led=s[i][1];
		else led=s[i][0];
	}
	cout<<led;
}
