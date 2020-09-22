#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	int count=0;
	while((m!=0&&n!=0)&&(m!=1||n!=1)){
		if(n>m){
		count++;
		n-=2;
		m--;
	}
	else{
		count++;
		m-=2;
		n--;
	}
	}
	cout<<count;
}
