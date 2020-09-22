#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//find all primes till n
		int primes[n+1];
		for(int i=0;i<=n;i++) primes[i]=1;
		primes[1]=0;
		for(int i=2;i*i<=n;i++){
			if(primes[i]){
				for(int j=i*i;j<=n;j+=i) primes[j]=0;
			}
		}
		//for(int i=1;i<=n;i++) cout<<i<<" "<<primes[i]<<endl;
		//calculate powers of primes
		vector<long long> powers;
		for(int i=2;i<=n;i++){
			if(primes[i]){
				//cout<<i<<" ";
				long long ans=0;
				for(int j=1;pow(i,j)<=n;j++) ans+=(n/pow(i,j));
				powers.push_back(ans);
				//cout<<ans<<endl;
			}
		}
		long long sum=1;
		for(int i=0;i<powers.size();i++) sum=(sum%m*(powers[i]+1)%m)%m;
		cout<<sum<<endl;
	}
}
