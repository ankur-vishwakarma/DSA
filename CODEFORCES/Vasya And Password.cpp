#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	string s[n];
	int a=0,d=0,c=0;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;s[i][j]!='\0';j++){
			if(s[i][j]>=65&&s[i][j]<=90) c=1;
			else if(s[i][j]>=97&&s[i][j]<=122) a=1;
			else if(s[i][j]>=48&&s[i][j]<=57) d=1;
		}
		if(a==1&&c==1&&d==1) cout<<s[i]<<"\n";
		else{
			if(a!=1){
				int count=0,j=0;
				while(count!=2&&s[i][j]!='\0'){
					if(s[i][j]>=65&&s[i][j]<=90) count++;
					j++;
				}
				if(count==2) s[i][j-1]='a';
				else{
					int k=0,flag=0;
					while(flag!=1){
						if(s[i][k]>=48&&s[i][k]<=57) flag=1;
						k++;
					}
						s[i][k-1]='a';
					
				}
			}
			if(c!=1){
				int count=0,j=0;
				while(count!=2&&s[i][j]!='\0'){
					if(s[i][j]>=97&&s[i][j]<=122) count++;
					j++;
				}
				if(count==2) s[i][j-1]='A';
				else
				{
					int k=0,flag=0;
					while(flag!=1){
						if(s[i][k]>=48&&s[i][k]<=57) flag=1;
						k++;
					}
						s[i][k-1]='A';
				}
			}
			if(d!=1){
				int count=0,j=0;
				while(count!=2&&s[i][j]!='\0'){
					if(s[i][j]>=65&&s[i][j]<=90) count++;
					j++;
				}
				if(count==2) s[i][j-1]='4';
				else{
						int k=0,flag=0;
					while(flag!=1){
						if(s[i][k]>=97&&s[i][k]<=122) flag=1;
						k++;
					}
						s[i][k-1]='4';
				}
			}
			cout<<s[i]<<"\n";
		}
		a=d=c=0;
	}
}
