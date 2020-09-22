#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> factors(int n) {
vector<int> f;
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
f.push_back(x);
n /= x;
}
}
if (n > 1) f.push_back(n);
return f;
}
main(){
int t;
cin>>t;
int s[t];
vector<int> k;
for(int i=0;i<t;i++) s[i]=i+1;
for(int i=0;i<t;i++){
vector<int > v=factors(s[i]);
//cout<<s[i]<<"i \n";
//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//cout<<endl;
for(int i=0;i<v.size();i++) k.push_back(v[i]); 
}
//for(int i=0;i<k.size();i++) cout<<k[i]<<" ";
sort(k.begin(),k.end());
//////////////////////////////////////////
vector<int> l;
//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//cout<<endl;
for(int i=0;i<k.size();i++){
int count=1;
if(i+1<k.size()){
 int j=i+1;
while(k[i]==k[j]) count++,j++;
i=j-1;
}
l.push_back(count);
}
long long m=1;
for(int i=0;i<l.size();i++) m=m*(l[i]+1);
cout<<m<<"\n";
}
