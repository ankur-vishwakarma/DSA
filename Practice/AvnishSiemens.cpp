#include<bits/stdc++.h>
using namespace std;
vector<int> SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    vector<int> ans;
    for (int p = 2; p <= n; p++)
        if (prime[p]) ans.push_back(p);
        
    return ans;
}
main(){
	int n;
	cin>>n;
	vector<int> primes = SieveOfEratosthenes(n);
	//for(int i=0;i<primes.size();i++) cout<<primes[i]<<" ";
	int h=0;
	while(n>1){
		//cout<<n<<endl;
		for(int i=0;i<primes.size()&&primes[i]<=n;i++){
			if(n%primes[i]==0){
				n/=primes[i],h++;
				break;
			}
		}
	}
	cout<<h-1;
}
