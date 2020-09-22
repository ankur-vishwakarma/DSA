#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#include<unordered_map>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int **dp;
ll nCr(ll n,ll r){
	//cout<<n<<" "<<r<<endl;
	if(n==r||r==0) return 1;
	if(dp[n][r]) return dp[n][r];
	ll ans=(nCr(n-1,r-1)+nCr(n-1,r));
	dp[n][r]=ans;
	return ans;
}
int main(){
	FAST;
	ll n,m,v;
	cin>>n>>m>>v;
	if(m<n-1){
		cout<<"-1";
	}else{
		ll possible=0,r=n-1; //remove 1 as placed on left or right
		dp=new int*[r+1];
		for(int i=0;i<r+1;i++) dp[i]=new int[2+1]{0};
		possible=nCr(r,2);
		for(int i=0;i<r+1;i++) delete dp[i];
		delete [] dp;
		
		if(m>possible+1){  //+1 for one bond extra on left or right
			cout<<"-1";
			return 0;
		}
		
		if(v==n){
			//take 1 on right of n
			cout<<n<<" "<<1<<endl; m--;
			//connect all to n except 1
			for(int i=2;i<n&&m;i++) cout<<n<<" "<<i<<endl,m--;
			//connect rest
			for(int i=2;i<n&&m;i++) for(int j=i+1;j<n&&m;j++) cout<<i<<" "<<j<<endl,m--;
		}else{
			//put nth on left of 1
			cout<<n<<" "<<v<<endl; m--;
			//connect all to v except v itself and n
			for(int i=1;i<n&&m;i++) {
				if(i==v) continue;
				cout<<v<<" "<<i<<endl,m--;
			}
			//connect rest all excluding v and n
			for(int i=1;i<n&&m;i++){
				if(i==v) continue;
				for(int j=i+1;j<n&&m;j++){
					if(j==v) continue;
					cout<<i<<" "<<j<<endl,m--;
				}
			}
		}
	}
	
	
	return 0;
}

/*
1111111111111111111111111111111111111111111111111111111111111111111111111111111111111

ll left=0,right=0;
		if(v>1){
			dp=new int*[v+1];
			for(int i=0;i<v+1;i++) dp[i]=new int[2+1]{0};
			left=nCr(v,2);
			for(int i=0;i<v+1;i++) delete dp[i];
			delete [] dp;
		}
		if(v<n){
			ll r=n-v+1;
			//cout<<r<<endl;
			dp=new int*[r+1];
			for(int i=0;i<r+1;i++) dp[i]=new int[2+1]{0};
			right=nCr(r,2);
			for(int i=0;i<r+1;i++) delete dp[i];
			delete [] dp;
		}
		//cout<<left<<"l r"<<right<<endl;
		if(m>left+right){
			cout<<"-1";
			return 0;
		}
		//print singles
		for(int i=1;i<n;i++) cout<<i<<" "<<i+1<<endl,m--;
		//try to donate m on left
		for(int i=1;i<v;i++) for(int j=i+2;j<=v&&m;j++)  cout<<i<<" "<<j<<endl,m--;
		//try on right
		for(int i=v;i<n;i++) for(int j=i+2;j<=n&&m;j++) cout<<i<<" "<<j<<endl,m--;
		
		
2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
/*else{
		ll left=0,right=0;
		if(v>1){
			dp=new int*[n+1];
			for(int i=0;i<n+1;i++) dp[i]=new int[2+1]{0};
			left=nCr(v,2);
			for(int i=0;i<n+1;i++) delete dp[i];
			delete [] dp;
		}
		if(v<n){
			ll r=n-v+1;
			dp=new int*[r+1];
			for(int i=0;i<r+1;i++) dp[i]=new int[2+1]{0};
			right=nCr(r,2);
			for(int i=0;i<r+1;i++) delete dp[i];
			delete [] dp;
		}
		if(m>left+right){
			cout<<"-1";
		}else{
			//print singles
			for(int i=1;i<n;i++) cout<<i<<" "<<i+1<<endl,m--;
			//try to donate m on left
			for(int i=1;i<v;i++){
				for(int j=i+2;j<=v&&m;j++)  cout<<i<<" "<<j<<endl,m--;
			}
			//try giving rights
			cout<<m<<endl;
			for(int i=v+1;i<n;i++){
				for(int j=i+2;j<=n&&m;j++) cout<<i<<" "<<j<<endl,m--;
			}
		}
	}
	
	/*ll n,r;
	cin>>n>>r;
	dp=new int*[n+1];
	for(int i=0;i<n+1;i++) dp[i]=new int[r+1]{0};
	cout<<nCr(n,r);*/
