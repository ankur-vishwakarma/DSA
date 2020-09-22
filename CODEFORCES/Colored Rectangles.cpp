#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	ll r,g,b,l;
	cin>>r>>g>>b;
	//ll s[r],t[g],u[b];
	priority_queue<ll> s,t,u;
	for(int i=0;i<r;i++) cin>>l,s.push(l);
	for(int i=0;i<g;i++) cin>>l,t.push(l);
	for(int i=0;i<b;i++) cin>>l,u.push(l);
	ll area=0;
	while(true){
		int x=0,y=0,z=0,count=0;
		priority_queue<pair<ll,ll> > dim;
		
		if(!s.empty()) x=s.top(),dim.push({x,1});
		else count++,dim.push({0,0});
		if(!t.empty()) y=t.top(),dim.push({y,2});
		else count++,dim.push({0,0});
		if(!u.empty()) z=u.top(),dim.push({z,3});
		else count++,dim.push({0,0});
		
		ll ln=dim.top().first;
		if(dim.top().second==1&&ln!=0) s.pop();
		else if(dim.top().second==2&&ln!=0) t.pop();
		else if(dim.top().second==3&&ln!=0) u.pop();
		dim.pop();
		
		ll bd=dim.top().first;
		if(dim.top().second==1&&bd!=0) s.pop();
		else if(dim.top().second==2&&bd!=0) t.pop();
		else if(dim.top().second==3&&bd!=0) u.pop();
		dim.pop();
		
		area+=(ln*bd);
		while(!dim.empty()) dim.pop();
		
		if(count>=2) break;
	}
	cout<<area<<endl;
}
