#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int i,s[n];
	long long sum=0;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		sum=sum+s[i];
	}
	if(sum%2==0){
		cout<<sum;
		return 0;
	}
	else
	{
		int min=10000000000;
		for(i=0;i<n;i++) if(s[i]%2!=0&&s[i]<min) min=s[i];
		sum=sum-min;
		cout<<sum;
	}
}
