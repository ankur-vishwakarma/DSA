#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int max=s[0],min=s[0],next=s[0];
	for(int i=1;i<n;i++){
		 if(s[i]>max) max=s[i];
		 if(s[i]<min) min=s[i];
	}
	do{
		for(int j=0;j<n;j++){
			if(s[j]>=min&&s[j]<=max) max=next=s[j];
		}
		for(int j=0;j<n;j++){
			if(s[j]==next){
				if(next%2==0) s[j]--;
				else s[j]++;
			}
			if(s[j]>max) max=s[j];
		}
		min=next;
	}while(next!=max);
	for(int i=0;i<n;i++) if(s[i]==max){
		if(s[i]%2==0) s[i]--;
		else s[i]++;
	}
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
