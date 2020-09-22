#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
long long dpfact[500000]={0};
long long ncr(int n,int r){
	//cout<<n<<" "<<r<<" ";
	long long nf=1;
	if(dpfact[n]) nf=dpfact[n];
	if(nf==1){
		for(int i=2;i<=n;i++) nf=(nf%m*i%m)%m,dpfact[i]=nf;
		dpfact[n]=nf;
	}
	//cout<<nf<<endl;
	long long rf=dpfact[r],nmrf=dpfact[n-r];
	long long k=(nf%m/rf%m)%m;
	k= (k%m/nmrf%m)%m;
	//cout<<k<<endl;
	return k;
}
main(){
	int t;
	cin>>t;
	dpfact[0]=dpfact[1]=1;
	while(t--){
		int n;
		cin>>n;
		long long nf=n;
		for(int i=2;i<=n-1;i++){
			long long nr=ncr(n-1,i)%m;
			//cout<<nr<<" "<<i<<endl;
			nf=(nf%m+nr%m)%m;
			//cout<<nf<<endl;
		}
		cout<<nf%m<<endl;
	}
}
