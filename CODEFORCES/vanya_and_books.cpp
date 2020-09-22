#include<iostream>
#include<cmath>
using namespace std;
main()
{
	long long n,count=0,sum=0;
	cin>>n;
	int k=n,l=0;
	while(k!=0) k/=10,l++;
	for(int i=0;i<l-1;i++){
		sum+=(9*pow(10,i)*(i+1));
		count+=(9*pow(10,i));
	}
	cout<<count<<" "<<sum<<" ";
        for(int j=count+1;j<=n;j++) sum+=l;
	cout<<sum;
}
