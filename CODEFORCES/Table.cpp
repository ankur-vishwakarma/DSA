#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double 
#define mod 1000000007

using namespace std;

main(){
	FAST;
	int n,m,k;
	cin>>n>>m>>k;
	int row=k/n,col=k%n;
	if(col==0) col=n;
	else row++;
	//cout<<row<<" "<<col<<endl;
	cout<<(col-1)*m+(row);
}
