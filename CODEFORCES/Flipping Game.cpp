#include<iostream>
using namespace std;
main(){
    int n;
	cin>>n;
	int i,s[n];
	for(i=0;i<n;i++) cin>>s[i];
	int count=1,max=1,hold=0,flag=0;
	for(i=0;i<n-1;i++){
			while(s[i]==s[i+1]&&i<n-1){
				count++;
				i++;
				//cout<<s[i]<<" "<<s[i+1]<<"\n";
			}
		if(count>max){
			max=count;
			hold=i;
			flag=hold-count+1;
		}
		count=1;
	}
	if(flag!=0){
		if(s[flag-1]==0) s[flag-1]=1;
	else s[flag-1]=0;
	for(i=flag-1;s[i]==s[i+1]&&i<n-1;i++) count++;
	if(count>max) max=count;
	count=1;
	if(s[flag-1]==0) s[flag-1]=1;
	else s[flag-1]=0;
	}
	if(s[hold+1]==0) s[hold+1]=1;
	else s[hold+1]=0; 
	for(i=flag;s[i]==s[i+1]&&i<n-1;i++) count++;
	if(count>max) max=count;
	cout<<max;
}
