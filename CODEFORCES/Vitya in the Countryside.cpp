#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	if(n==1&&s[n-1]!=15&&s[n-1]!=0) cout<<"-1";
	else if((s[n-1]<s[n-2]&&s[n-1]!=0)||s[n-1]==15) cout<<"DOWN";
	else cout<<"UP";
}
