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
	int a,b,c;
	cin>>a>>b>>c;
	int q=min(a/3,min(b/2,c/2));  //nikaldo total vale
	a-=(q*3),b-=(q*2),c-=(q*2);
	int days[7]={1,1,2,3,1,3,2};
	int ans=0,count=0;
	//cout<<a<<" "<<b<<" "<<c<<endl;
	while(count<7){  //start from each day one by one
		int aa=a,bb=b,cc=c,local=0;
		for(int i=count;;i++){
			if(i>=7) i=i%7;
			if(days[i]==1){
				if(aa>0) local++,aa--;
				else break;
			}
			else if(days[i]==2){
				if(bb>0) local++,bb--;
				else break;
			}
			else{
				if(cc>0) local++,cc--;
				else break;
			}
		}
		ans=max(ans,local);
		count++;
	}
	cout<<q*7+ans<<endl;
}
