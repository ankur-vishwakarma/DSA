#include<iostream>
#include<string>
using namespace std;
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	//data extraction
	int t[n][2],flag=0,temp,temp2;
	for(int i=0;i<n;i++){
		temp=s[i][0]-'0';
		if(s[i][1]>=48&&s[i][1]<=57){
				temp2=s[i][1]-'0';
				t[i][0]=temp*10+temp2;
				flag=1;
				if(s[i][2]=='P') t[i][0]=t[i][0]+12;
			}
		else{
			t[i][0]=temp;
			if(s[i][1]=='P') t[i][0]=t[i][0]+12;
		}
		if(flag!=1){
				temp=s[i][4]-'0';
				if(s[i][5]>=48&&s[i][5]<=57){
				temp2=s[i][5]-'0';
				t[i][1]=temp*10+temp2;
				if(s[i][6]=='P') t[i][1]=t[i][1]+12;
			}
			else{
				t[i][1]=temp;
				if(s[i][5]=='P') t[i][1]=t[i][1]+12;
			}
		}
		else{
				temp=s[i][5]-'0';
				if(s[i][6]>=48&&s[i][6]<=57){
				temp2=s[i][6]-'0';
				t[i][1]=temp*10+temp2;
				if(s[i][7]=='P') t[i][1]=t[i][1]+12;
			}
			else{
				t[i][1]=temp;
				if(s[i][6]=='P') t[i][1]=t[i][1]+12;
			}
			}
			flag=0;
		}
			//for(int i=0;i<n;i++) cout<<t[i][0]<<"\n"<<t[i][1];
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(t[i][1]-t[i][0]>t[j][1]-t[j][0]){
						temp=t[i][0],temp2=t[i][1];
						t[i][0]=t[j][0],t[i][1]=t[j][1];
						t[j][0]=temp,t[j][1]=temp2;
					}
				}
			}
			int count=0;
			//for(int i=0;i<n;i++) cout<<t[i][0]<<"\n"<<t[i][1]<<"\n";
			int timeline[18]={0};
			for(int i=0;i<n;i++){
				if(t[i][0]>=5&&t[i][1]<=23){
					for(int j=t[i][0];j<t[i][1];j++){
						if(timeline[j]==1){
							flag=1;
							break;
						}
					}
					if(flag!=1){
						count+=500;
						for(int j=t[i][0]+1;j<t[i][1];j++) timeline[j]=1;
					}
					flag=0;
				}
			}
			cout<<count;
	}
