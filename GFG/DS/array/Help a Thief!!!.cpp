#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int nt,n;
	    cin>>nt>>n;
	    vector<pair<int,int> > v;
	    for(int i=0;i<n;i++){
	        int a,b;
	        cin>>a>>b;
	        v.push_back(make_pair(b,a));
	    }
	    sort(v.begin(),v.end());
	    //for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
	    int sum=0;
	    for(int i=n-1;i>=0&&nt>0;i--){
	        if(nt>=v[i].second){
	            sum+=(v[i].first*v[i].second);
	            nt-=v[i].second;
	        }
	        else{
	            sum+=(v[i].first*nt);
	            nt=0;
	        }
	    }
	    cout<<sum<<endl;
	    }
}
