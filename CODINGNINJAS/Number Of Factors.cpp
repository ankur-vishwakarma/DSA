#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int * primes=new int[1000001]{0};
	for(int i=3;i<=1000001;i+=2) primes[i]=1;
	primes[2]=1;
	for(int i=3;i*i<=1000001;i+=2){
		if(primes[i]){
			for(int j=i*i;j<=1000001;j+=i) primes[j]=0;
		}
	}
	//for(int i=1;i<100;i++) if(primes[i]) cout<<i<<" ";
	//cout<<"h";
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		int s[b+1],chances[b+1];
		for(int i=a;i<=b;i++) s[i]=i;
		for(int i=2;i<=b;i++){
			if(primes[i]){
				int j=a;
				for(int k=j;k<=b;k+=i) if(chances[k]<n) chances[k]++,s[k]/=i;
			}
		}
		for(int i=a;i<=b;i++) cout<<s[i]<<" ";
		cout<<endl;
		int count=0;
		for(int i=a;i<=b;i++) if(s[i]==1) count++;
		cout<<count<<endl;
	}
}
