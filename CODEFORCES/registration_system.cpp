#include<bits/stdc++.h>
using namespace std;
main(){
int n;
cin>>n;
map<string, int> m;
string b[n],ans[n];
for(int i=0;i<n;i++){ cin>>b[i];  m[b[i]]++; cout<<m[b[i]]; }
/*map<string ,int>::iterator itr;
for(itr= m.begin();itr !=m.end();itr++) cout<<itr->first<<" "<<itr->second<<endl;
//for(int i=0;i<n;i++) cout<<m[i]*/
}
