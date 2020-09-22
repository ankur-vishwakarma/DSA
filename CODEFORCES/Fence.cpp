#include<iostream>
using namespace std;
main()
{
	int n,h,min=0;
	cin>>n>>h;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int sum=0,flag=0;
	for(int i=0;i<h;i++) min=min+s[i];
	for(int i=0;i+h<n;i++)
	{
		for(int j=i;j<h+i;j++) sum=sum+s[j];
		if(sum<min)
		{
			min=sum;
			flag=i;
		}
		sum=0;
	}
	cout<<flag+1;
}
