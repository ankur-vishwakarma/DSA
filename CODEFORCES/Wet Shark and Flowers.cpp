#include<bits/stdc++.h>
using namespace std;
main(){
	long long n,p;
	cin>>n>>p;
	double s[n][2];
	long long ss[n][2];
	for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1],ss[i][0]=s[i][0],ss[i][1]=s[i][1];
	
	int a[n];
	for(int i=0;i<n;i++) a[i]=ss[i][1]/p - (ss[i][0]-1)/p;   //calculating nos divisible in range
	//,cout<<a[i]<<" "<<ss[i][1]<<" "<<ss[i][1]/p<<" "<<(ss[i][0]-1)/p<<endl
	
	
	double total=0;
	for(int i=0;i<n;i++){    //summing probs
		int j=(i+1)%n;
		double not_div_i=(double)((s[i][1]-s[i][0]+1-a[i])/(s[i][1]-s[i][0]+1));
		double not_div_j=(double)((s[j][1]-s[j][0]+1-a[j])/(s[j][1]-s[j][0]+1));
		
		double prob_div = 1- not_div_i * not_div_j;
		total+=(prob_div*2000);
	}
	cout<<fixed;
	cout<<setprecision(6)<<total<<endl;
}
