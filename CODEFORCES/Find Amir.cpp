#include<iostream>
using namespace std;
main(){
	int n,count=0;
	cin>>n;
	for(int i=1;i<n;i++){
			int p=(i+i+1)%(n+1);
			count+=p;
	}
	cout<<count;
}
