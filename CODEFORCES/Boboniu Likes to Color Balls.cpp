#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		ll c[4];
		cin>>c[0]>>c[1]>>c[2]>>c[3];
		int odds=0;
		for(int i=0;i<4;i++){
			if(c[i]%2!=0) odds++;
		}
		if(odds<=1){
			cout<<"Yes\n";
			continue;
		}
		
		ll m=min(c[0],min(c[1],c[2])),u=1;
		m=min(m,u);
		
		c[0]-=m,c[1]-=m,c[2]-=m;
		c[3]+=m;
		odds=0;
		for(int i=0;i<4;i++){
			if(c[i]%2!=0) odds++;
		}
		if(odds<=1){
			cout<<"Yes\n";
			continue;
		}
		
		m=min(c[0],min(c[1],c[2]));
		m=min(m,u);
		
		c[0]-=m,c[1]-=m,c[2]-=m;
		c[3]+=m;
		odds=0;
		for(int i=0;i<4;i++){
			if(c[i]%2!=0) odds++;
		}
		
		if(odds<=1){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
}
/*
1
5 20
1 2 50
1 3 10
3 4 30
3 5 40


*/
