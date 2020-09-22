#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
main(){
int q;
cin>>q;
char s[q];
int t[q];
deque <int> k;
for(int i=0;i<q;i++) cin>>s[i]>>t[i];
for(int i=0;i<q;i++){
if(s[i]=='L') k.push_front(t[i]);
else if(s[i]=='R') k.push_back(t[i]);
else{
deque<int>::iterator l;
int count=0;
for(l=k.begin();l<k.end();l++){
count++;
if(t[i]==*l) break;
}
if(count-1<k.size()-count) cout<<count-1<<endl;
else cout<<k.size()-count<<endl;
}
}
}
