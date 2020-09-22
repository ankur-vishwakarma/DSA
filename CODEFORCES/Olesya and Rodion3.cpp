#include<iostream>
using namespace std;
int main()
{
	long long n,t,j=10;
	cin>>n>>t;
	int a=0,b=0,n1=n,t1=t;
		while(n1!=0) a++,n1/=10;
		while(t1!=0) b++,t1/=10;
		if(b>a){
			cout<<"-1";
			return 0;
		}
	long long k=t;
	for(int i=1;i<n;i++)
	{
		t=t+k*j;
		j=j*10;
	}
	cout<<t;
	return 0;
}
