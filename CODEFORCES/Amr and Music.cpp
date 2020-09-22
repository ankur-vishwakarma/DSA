#include<iostream>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int s[n][2];
	for(int i=0;i<n;i++){
		 cin>>s[i][0];
		 s[i][1]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i][0]>s[j][0]){
				int tem=s[i][0],tmp=s[i][1];
			s[i][0]=s[j][0],s[i][1]=s[j][1];
			s[j][0]=tem,s[j][1]=tmp;
			}
		}
	}
	long long sum=0;
	int count=0,i=0;
	while(sum<=k&&i<n){
		sum+=s[i][0];
		i++,count++;
	}
	if(sum>k) count--;
	cout<<count<<"\n";
	for(i=0;i<count;i++) cout<<s[i][1]<<" "; 
}
