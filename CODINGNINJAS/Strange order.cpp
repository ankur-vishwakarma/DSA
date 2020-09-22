#include<bits/stdc++.h>
using namespace std;
class d{
	public:
		int data;
		priority_queue <int> g ;
};
main(){
	int n;
    cin>>n;
    d * obj=new d[n+1];
    for(int i=1;i<=n;i++) obj[i].data=i;
    for(int i=2;i*i<=n;i++){
    	for(int j=i+i;j<=n;j+=i){
    		obj[j].g.push(i);
    		if(j/i!=i) obj[j].g.push(j/i);
		}
	}
	int pres[n+1]={0};
	for(int i=n;i>0;i--){
		if(!pres[i]){
			pres[i]=1;
		    cout<<i<<" ";
		    while(!obj[i].g.empty()){
		    	int a=obj[i].g.top();
				obj[i].g.pop();
		    	if(!pres[a]){
		    		pres[a]=1;
		    		cout<<a<<" ";
				}
		    }
		}
	}
}
