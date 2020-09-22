#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]>s[j]){
				int t=s[i];
				s[i]=s[j];
				s[j]=t;
			}}}
//	for(int i=0;i<n;i++) cout<<s[i]<<" ";
//	cout<<endl;
	int count=0;
	for(int i=0;i<n;i++){
		int hold=1;
		for(int j=i+1;j<n;j++) if(s[j]==s[i]) s[j]++,count++;
			}	
//	for(int i=0;i<n;i++) cout<<s[i]<<" ";
//	cout<<endl;
	int hold=1;
	for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(s[i]==s[j]) s[j]+=hold,hold++,count+=hold;
//	for(int i=0;i<n;i++) cout<<s[i]<<" ";
        cout<<count;
}
