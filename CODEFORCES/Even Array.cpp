#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		int ops=0,flag=0;
		for(int i=0;i<n;i++){
			if(s[i]%2!=i%2){
				for(int j=i+1;j<n;j+=2){
					if(s[j]%2!=j%2){
						int tmp=s[i];
						s[i]=s[j];
						s[j]=tmp;
						flag=1;
						ops++;
						break;
					}
				}
				if(flag==0){
					cout<<-1<<endl;
					flag=2;
					break;
				}
			}
			flag=0;
		}
		if(flag!=2) cout<<ops<<endl;
	}
}
