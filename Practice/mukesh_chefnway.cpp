#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int c[n];
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
			long long int pro=c[0];
		sort(c+1,c+(n-1));
		for(int i=0;i<n;i++){
			if(k<c[0]){pro=0;break;}
			
			else if(c[i+1]>=1 && k>=c[i]) pro=(pro% 1000000007*c[i+1]% 1000000007)% 1000000007;
			
			else{
				pro=((pro% 1000000007*c[n-1]% 1000000007)% 1000000007)/c[i];
			break;
		}
	}
	pro=pro% 1000000007;
	cout<<pro;
}
