#include<bits/stdc++.h>
using namespace std;
main(){
	int n=100000001;
	int * s=new int[n];
	for(int i=2;i<=n;i++) s[i]=1;
	for(int i=2;i*i<=n;i++){
		if(s[i]){
			for(int j=i*i;j<=n;j+=i) s[j]=0;
		}
	}
	int count=0,flag;
	for(int i=2;i<=n;i++){
		//cout<<i<<" ";
		if(s[i]){
			count++;
			//cout<<i<<" "<<count<<endl;
			if(count==10001){
				cout<<i;
				break;
			}
		}
	}
}
