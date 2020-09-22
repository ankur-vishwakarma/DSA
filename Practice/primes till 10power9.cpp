#include<bits/stdc++.h>
using namespace std;
main(){
	int *primes=new int[1000000001]{0};
		for(int i=1;i<=1000000001;i+=2) primes[i]=1;
		primes[2]=1;
		primes[1]=0;
		for(int i=3;i*i<=1000000001;i+=2){
			if(primes[i]){
				for(int j=i*i;j<=1000000001;j+=i) primes[j]=0;
			}
		}
		for(int i=2;i<=1000000001;i++) if(primes[i]) cout<<i<<",";
}
