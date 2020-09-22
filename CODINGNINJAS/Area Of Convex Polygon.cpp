#include<bits/stdc++.h>
using namespace std;
double area_poly(float * s,float * t,int n){
	double area=0;
	for(int i=1;i<n-1;i++){
		int x1=s[i]-s[0],y1=t[i]-t[0];
		int x2=s[i+1]-s[0],y2=t[i+1]-t[0];
		area+=(x1*y2-x2*y1);
	}
	return abs(area)/2;
}
main(){
	int n;
	cin>>n;
	float s[n],t[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>t[i];
	cout<<(long)area_poly(s,t,n);
}
