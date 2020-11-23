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

int ans;
map<string,int> p;
int sz;

int check(string s,int i,int n){
	//cout<<s<<" "<<i<<endl;
	if(p[s]) return p[s];
	if(n==2){
		p[s]=sz-n;
		ans=min(p[s],ans);
		return p[s];
	}
	
	//check current
	string left=s.substr(1,n)+s[0];
	string right=s[n-1]+s.substr(0,n-1);
	//cout<<left<<" "<<right<<endl;
	if(left==right){
		p[s]=sz-n;
		ans=min(p[s],ans);
		cout<<s<<" "<<i<<"eq "<<p[s]<<endl;
		return p[s];
	}
	//dont take ith
	//string kk=s.substr(0,i)+s.substr(i+1,n); cout<<kk<<endl;
	int l=check(s.substr(0,i)+s.substr(i+1,n),i,n-1);
	//take
	int r=INT_MAX;
	if(i+1<s.size()) r=check(s,i+1,n);
	p[s]=min(l,r);
	ans=min(p[s],ans);
	cout<<l<<"l r"<<r<<endl;
	cout<<s<<" "<<i<<"end "<<p[s]<<endl;
	return p[s];
}

main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		/*int s[a.length()];
		for(int i=0;i<s.length();i++) s[i]=a[i]-'0';*/
		ans=INT_MAX; sz=s.length();
		check(s,0,s.length());
		cout<<ans<<endl;
	}
}
