#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        sort(s,s+n);
        int dif[n],sum=0;
        for(int i=0;i<n-1;i++) dif[i]=s[i+1]-s[i],sum+=dif[i];
        //cout<<sum;
        float avg=(sum/(c+0.0));
        //lets choose pos for cows
        int min=INT_MAX,f=0;
        for(int i=1;i<n;i++){
        	int d=s[i]-s[f];
        	//cout<<d<<endl;
        	if(d<avg) continue;
        	f=i;
        	if(d<min) min=d;
		}
        cout<<min<<endl;
    }
}
/*
        map<int,int> f;
        for(int i=1;i<n;i++){
            f[s[i]-s[i-1]]++;
        }
        map<int,int> :: iterator it=f.begin();
        while(it!=f.end()){
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }
*/
