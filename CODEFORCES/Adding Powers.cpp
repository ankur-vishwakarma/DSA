#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,s[31];
ll pp=100000000000000000;
long long power(long long x, long long y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 
void solve(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	ll p[100]={};
	ll strt=0,turn=0;
	int flag=0;
	for(int i=0;i<n;i++){
		cout<<s[i]<<" "<<turn<<" "<<strt<<endl;
		if(s[i]==0) continue;
		else{
			while(true){
				if(p[turn]==0) p[turn]=power(k,turn);
				//cout<<p[turn]<<endl;
				ll to_add=p[turn],pp=turn-1;
				if(to_add>s[i]){
					flag=1;
					break;
				}
				//cout<<s[i]<<" "<<p[turn]<<endl;
				while(to_add<s[i]&&pp>strt){
					cout<<to_add<<" "<<pp<<endl;
					to_add+=p[pp];
					pp--;
				}
				if(to_add==s[i]){
					++turn,strt=turn;
					break;
				}
				else turn++;
			}
		}
	}
	if(flag) cout<<"NO\n";
	else cout<<"YES\n";
}
void solve2(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>s[i];
	
	vector <ll> p;
	sort(s,s+n);
	
	ll v=1;
	while(v<=pp) p.push_back(v),v*=k;
	/*for(int i=0;i<p.size();i++) cout<<p[i]<<" ";
	cout<<endl;*/
	
	
	map<ll,bool> there;
	int flag=0;
	for(int i=0;i<n;i++){
		if(s[i]==0) continue;
		int l=lower_bound(p.begin(),p.end(),s[i])-p.begin();
		//cout<<p[l]<<endl;
		if(p[l]==s[i]){
			if(there[s[i]]){
				flag=1;break;
			}else{
				there[s[i]]=1;
				continue;
			}
		}
		
		l--;  //as lower bound gives greater equal we checked for equal so surely bigger
		ll val=0;
		for(int j=l;j>=0;j--){
			if(val+p[j]>s[i]) continue;
			if(there[p[j]]){
				flag=1;
				break;
			}
			val+=p[j]; there[p[j]]=1;
			if(val==s[i]) break;
		}
		if(val!=s[i]) flag=1;
		if(flag) break;
	}
	if(flag) cout<<"NO\n";
	else cout<<"YES\n";
}
main(){
	int t;
	cin>>t;
	while(t--){
		solve2();
	}
}
