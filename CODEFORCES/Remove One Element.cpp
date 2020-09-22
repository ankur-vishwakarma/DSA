#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int max=1,i=0,count=1,hold=1;
	while(i+1<n){
		while(s[i+1]>s[i]&&i+1<n) count++,i++;
		int flag=0;
		if(s[i+1]>s[i-1]&&i+1<n) i=i+1,hold=count,flag=1;
		while(s[i+1]>s[i]&&i+1<n&&flag==1) count++,i++;
		if(count>max) max=count;
		if(s[i+1]>s[i-1]&&i+1<n&&flag==1) count=count-hold+1;
		else count=1;
		i++;
	}
	cout<<max;
}
/*
8 2 4 3 5 11 7 8 9
8 2 4 3 2 11 7 8 9

2 4 3 5 11 7 12 13
2 4 3 2 5
1 4 2 5 1 4 3

 */
