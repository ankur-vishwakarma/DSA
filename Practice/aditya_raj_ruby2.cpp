#include <bits/stdc++.h> 
using namespace std; 
 long long fact(long long n){
 	int a=1;
 	for(int i=2;i<=n;i++) a*=i;
 	return a;
 } 
int count_numbers(int k, int n) 
{
	if(n==1) return k;
	long long total_nos=pow(k,n);
	long long zeroes=0;
	for(int i=2;i<=n;i++){
		long long ans=fact(n-i);
		zeroes+=ans;
	}
	return total_nos-zeroes;
} 
int main() 
{ 
    int k,n;
    cin>>n>>k;
    cout << count_numbers(k, n); 
    return 0; 
} 
