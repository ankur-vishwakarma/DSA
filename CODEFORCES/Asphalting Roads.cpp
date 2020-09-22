#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int s[n*n][2];
	for(int i=0;i<n*n;i++) cin>>s[i][0]>>s[i][1];
	int t[n*n][2]={0,0},count=0,flag=0;
	for(int i=0;i<n*n;i++){
		for(int j=0;j<count;j++){
			if(s[i][0]==t[j][0]||s[i][1]==t[j][1]) flag=1;
		}
		if(flag!=1){
			t[count][0]=s[i][0];
			t[count][1]=s[i][1];
			count++;
			cout<<i+1<<" ";
		}
		flag=0;
	}
}
