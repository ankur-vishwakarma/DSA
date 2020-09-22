#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int count=0,max=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=i+1;j<n;j++){
			if(s[i]==s[j]) count++;
			else{
				if(flag==0){
					flag=1;
					for(int k=j+1;k<n;k++){ if(s[k]==s[j]) count++;
						                else break; } 
				}
				else{
					if(count>max) max=count;
					count=0;
					break;
				}
			}
		}
	}
	cout<<max;
}
