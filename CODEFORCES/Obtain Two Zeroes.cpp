#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,f;
		cin>>a>>b;
		if(a>b) f=a,a=b,b=f;
		if(b>2*a){
			cout<<"NO\n";
			continue;
		}
		if((a+b)%3==0) cout<<"YES\n";
		else cout<<"NO\n";
		/*int dlte=a;
		while(2*dlte>b) dlte--;*/
		
		//binary search
		/*int strt=0,end=a,dlte=0;
		while(strt<=end){
			int mid=(strt+end)/2;
			if(mid*2<=b){
				dlte=mid;
				strt=mid+1;
			}
			else end=mid-1;
		}*/
		
	    /*int dlte;
		if(b%2==0) dlte=b/2;
		else dlte=(b-1)/2;
		//cout<<dlte<<endl;
		a-=dlte,b-=(2*dlte);
		if((a==1&&b==2)||(a==2&&b==1)||(a==0&&b==0)) cout<<"YES\n";
		else cout<<"NO\n";*/
	}
}
