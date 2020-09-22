#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	ll n,d,m;
	cin>>n>>d>>m;
	int s[n];
	priority_queue <ll , vector<int> , greater<int> > sm;
	priority_queue<ll> bg,gp;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]<=m) sm.push(s[i]);
		else bg.push(s[i]);
	}
	ll ans=0;
	while(!sm.empty()){
		ll sum=0;
		if(sm.size()<d){
			while(!sm.empty()) ans+=sm.top(),sm.pop();
			break;
		}
		for(int i=1;i<=d;i++){
			//cout<<sm.top()<<" ";
			sum+=sm.top();
			sm.pop();
		}
		gp.push(sum);
		//cout<<sum<<endl;
	}
	deque<ll> sb;
	while(!gp.empty()){
		sb.push_back(gp.top());
		gp.pop();
	}
	while(!sb.empty()&&!bg.empty()){
		ll bb=bg.top(),ss=sb.front();
		//cout<<ss<<" "<<bb<<endl;
		if(bg.size()==1){
			while(!sb.empty()) ans+=sb.front(),sb.pop_front();
			ans+=bb,bg.pop();
			break;
		}
		if(bb>ss){
			ans+=bb;
			bg.pop(),sb.pop_back();
		}
		else{
			ans+=ss;
			sb.pop_front();
		}
	}
	while(!gp.empty()) ans+=gp.top(),gp.pop();
	while(!bg.empty()){
		ans+=bg.top();
		bg.pop();
		for(int i=1;i<=d;i++){
			if(bg.empty()) break;
			bg.pop();
		}
	}
	cout<<ans<<endl;
}
