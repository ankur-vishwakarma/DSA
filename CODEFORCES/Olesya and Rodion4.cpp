#include<iostream>
using namespace std;
int main()
{
	long long n,t,j=10;
	cin>>n>>t;
	if(t==10&&n==1){
		cout<<"-1";
		return 0;
	}
	if(t!=10) for(int i=1;i<=n;i++) cout<<t;
	else {
		for(int i=1;i<n;i++) cout<<"1";
		cout<<"0";
	}
}
