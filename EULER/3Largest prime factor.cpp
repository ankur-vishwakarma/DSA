#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<ll> primeFactors(ll n)  
{
	vector<ll> v;
    // Print the number of 2s that divide n  
    if(n%2==0) v.push_back(2);
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        if(n%i==0) v.push_back(i);
        while (n % i == 0)  
        {  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  v.push_back(n);
    return v;
}  
main(){
	ll n;
	cin>>n;
	vector<ll> v=primeFactors(n);
	ll m=0;
	for(ll i=0;i<v.size();i++) if(v[i]>m) m=v[i];
	cout<<m<<endl;
}
