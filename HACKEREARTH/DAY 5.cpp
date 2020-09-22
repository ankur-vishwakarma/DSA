#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
    long long s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		if(s[i]%2==0){
			double a=log2(s[i]);
			long long b=a;
			if(a-b==0) cout<<"Jatin\n";
			else cout<<"Pranshu\n";
		}
		else{
			double a=log2(s[i]+1);
			long long b=a;
			if(a-b==0) cout<<"Pranshu\n";
			else cout<<"Jatin\n";
		}
	}
}
