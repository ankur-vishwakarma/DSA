#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	long long s[n+2];
	s[0]=0; s[n+1]=m;
	for(int i=1;i<=n;i++) cin>>s[i];
	long long dif[n+1];
	for(int i=0;i<n+1;i++) dif[i]=s[i+1]-s[i],cout<<dif[i]<<" ";
	cout<<endl;	
	ll esum=0,osum=0;
	for(int i=0;i<=n;i+=2) osum+=dif[i];
	for(int i=1;i<=n;i+=2) esum+=dif[i];
	if(osum>esum) cout<<osum<<endl;
	else{
		 		
	}
	/*ll maxe,maxo,mm=0;
	for(int i=0;i<=n;i+=2) if(dif[i]>mm) mm=dif[i],maxe=i;
	mm=0;
	for(int i=1;i<=n;i+=2) if(dif[i]>mm) mm=dif[i],maxo=i;
	//odd sum left/right of even max
	ll osuml=0,osumr=0,osum=0;
	cout<<dif[maxe]<<endl;
	for(int i=1;i<maxe;i+=2) osuml+=dif[i];
	for(int i=maxe+1;i<=n;i+=2) osumr+=dif[i];
	if(osuml>osumr){
		osum+=osuml;
		osum+=(dif[maxe]-1);
		for(int i=maxe+2;i<=n;i+=2) osum+=dif[i];
	}
	else{
		osum+=osumr;
		osum+=(dif[maxe]-1);
		for(int i=0;i<=maxe-2;i+=2) osum+=dif[i];
	}
	cout<<osum<<endl;
	//even
	ll esuml=0,esumr=0,esum=0;
	for(int i=0;i<maxo;i+=2) esuml+=dif[i];
	for(int i=maxo+1;i<=n;i+=2) esumr+=dif[i];
	if(esuml>esumr){
		esum+=esuml;
		esum+=(dif[maxo]-1);
		for(int i=maxo+2;i<=n;i+=2) esum+=dif[i];
	}
	else{
		esum+=esumr;
		esum+=(dif[maxo]-1);
		for(int i=1;i<=maxo-2;i+=2) esum+=dif[i];
	}
	cout<<osum<<" "<<esum<<endl;
	if(n%2==0) cout<<osum;
	else cout<<esum;*/
}
/*
7 20
2 4 6 9 12 17 19
*/
