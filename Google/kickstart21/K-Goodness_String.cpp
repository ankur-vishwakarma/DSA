#include<bits/stdc++.h>
using namespace std;
main(){
    int t,cs=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int now=0;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[n-i-1]) now++;
        }
        cout<<"Case #"<<cs<<": "<<abs(k-now)<<endl;
        cs++;
    }
}
