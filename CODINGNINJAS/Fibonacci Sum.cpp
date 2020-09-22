#include<bits/stdc++.h>
#define ll long long 
#define mk 1000000007
using namespace std;
void multiply(ll a[][2],ll b[][2]){
	ll fv=(((a[0][0]%mk*b[0][0]%mk)%mk)+((a[0][1]%mk*b[1][0]%mk)%mk))%mk;
	ll sv=(((a[0][0]%mk*b[0][1]%mk)%mk)+((a[0][1]%mk*b[1][1]%mk)%mk))%mk;
	ll tv=(((a[1][0]%mk*b[0][0]%mk)%mk)+((a[1][1]%mk*b[1][0]%mk)%mk))%mk;
	ll ffv=(((a[1][0]%mk*b[0][1]%mk)%mk)+((a[1][1]%mk*b[1][1]%mk)%mk))%mk;
	a[0][0]=fv,a[0][1]=sv,a[1][0]=tv,a[1][1]=ffv;	
}
void power(ll M[][2],ll n){
	if(n==0||n==1) return;
	power(M,n/2);
	multiply(M,M);
	if(n%2!=0){
		ll A[][2]={{1,1},{1,0}};
		multiply(M,A);
	}
}
int fib(ll M[][2],ll n){
	if(n==0) return 0;
	power(M,n-1);
	return M[0][0];
}
main(){
	ll n,m;
	cin>>n>>m;
	ll M[][2]={{1,1},{1,0}},A[][2]={{1,1},{1,0}};
	long long sum=fib(M,n);
	for(ll i=n+1;i<=m;i++){
		if(i==1||i==2){
            sum+=1;
            continue;
        }
		multiply(M,A);
		sum=(sum%mk+M[0][0]%mk)%mk;
	}
	cout<<sum;
}
