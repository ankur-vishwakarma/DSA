#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	while(n--){
		int th=0,tw=0;
		int k;
		cin>>k;
		while(k%2==0) k/=2,tw++;
		while(k%3==0) k/=3,th++;
		//cout<<th<<" "<<tw<<" "<<k<<endl;
		if(k!=1){
			cout<<-1<<endl;
			continue;
		}else{
			if(th>=tw) cout<<tw+(th-tw)*2<<endl;
			else cout<<-1<<endl;
		}
	}
}
