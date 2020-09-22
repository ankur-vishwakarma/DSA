#include<bits/stdc++.h>
using namespace std;
main(){
	int q,k;
	cin>>q>>k;
	priority_queue <long long , vector<long long>,greater<long long> > pq;
	for(int i=0;i<q;i++){
		int qt;
		cin>>qt;
		if(qt==1){
			long long a,b;
			cin>>a>>b;
			long long d=a*a+b*b;
			pq.push(d);
		}
		else{
			stack <long long> s;
			int p=k;
			while(p--){
				s.push(pq.top());
				pq.pop();
			}
			cout<<s.top()<<endl;
			p=k;
			while(p--) pq.push(s.top()),s.pop();
		}
	}
	
}
