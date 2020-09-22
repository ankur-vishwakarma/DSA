#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++)
	{
		if(s[i]==1)
		{
			printf("-1");
			return 0;
		}
	}
	printf("1");
}
