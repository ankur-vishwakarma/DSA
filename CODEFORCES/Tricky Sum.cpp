#include<iostream>
#include<math.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t];
	for(int i=0;i<t;i++) cin>>s[i];
	long long sum=0;
	for(int i=0;i<t;i++){
		for(int j=1;j<=s[i];j++){
			int s=log2 (j);
			float p=log2 (j);
			//cout<<s<<" "<<log2 (j)<<"\n";
			if(s==p) sum=sum-j;
			else sum=sum+j;
		//	cout<<sum<<"\n";
		}
		cout<<sum<<"\n";
		sum=0;
	}
}
