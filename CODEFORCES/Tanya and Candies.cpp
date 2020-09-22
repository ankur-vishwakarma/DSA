#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int a=0,b=0,d,count=0;
	for(int i=0;i<n;i+=2) a+=s[i];
	for(int i=1;i<n;i+=2) b+=s[i];
	if(a==b){
		for(int i=0;i<n;i+=2)
			for(int j=1;j<n;j+=2)
				if(s[i]==s[j]){
					//cout<<i<<" "<<j<<endl;
					 count++;
					 s[j]=-1;
				}
	}
	else{
		if(a>b){
			d=a-b;
			for(int i=0;i<n;i+=2) if(s[i]==d) count++;
		}
		else{
			d=b-a;
			for(int i=1;i<n;i+=2) if(s[i]==d) count++;
		}
	}
	cout<<count;
}
