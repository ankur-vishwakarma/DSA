#include<iostream>
using namespace std;
main()
{
	int n,h,min=0;
	cin>>n>>h;
	int s[n],sum=0;
	for(int i=0;i<n;i++){
		 cin>>s[i];
		 sum=sum+s[i];
		 s[i]=sum;
	}
	int flag=0;
	min=s[h-1];
	for(int i=0;h+i<n;i++){
		if(s[h+i]-s[i]<min){
			min=s[h+i]-s[i];
			flag=i+1;
		}
	}
	cout<<flag+1;
}
