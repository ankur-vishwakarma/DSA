#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a;
	cin>>n>>a;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int j=a-2,k=a,count=0;
	if(s[a-1]==1) count++;
	while(j>=0||k<n){
		int flag=0,hold=0;
		if(j>=0){ flag++; if(s[j]==1) flag++; }
		if(k<n){ hold++; if(s[k]==1) hold++; }
                j--,k++;
		if(flag==2&&hold==2) count+=2;
		else if(flag==2&&hold==0) count++;
                else if(flag==0&&hold==2) count++;

//cout<<j+1<<" "<<k-1<<" "<<count<<" "<<flag<<" "<<hold<<endl;
	}
	cout<<count;

}
