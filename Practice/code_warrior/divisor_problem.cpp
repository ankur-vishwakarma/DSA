#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> factors(long long n) {
vector<long long> f;
for (long long x = 2; x*x <= n; x++) {
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
long long s[t];
for(int i=0;i<t;i++) cin>>s[i];
for(int i=0;i<t;i++){
vector<long long > v=factors(s[i]);
vector<long long> k;
//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//cout<<endl;
sort(v.begin(),v.end());
for(long long i=0;i<v.size();i++){
long long count=1;
if(i+1<v.size()){
 long long j=i+1;
while(v[i]==v[j]&&j<v.size()) count++,j++;
i=j-1;
}
k.push_back(count);
//cout<<v[i]<<" "<<count<<endl;
//cout<<i<<"i "<<v[i]<<endl;
}
//for(int i=0;i<k.size();i++) cout<<k[i]<<" ";
//cout<<endl;
long long m=1;
for(long long i=0;i<k.size();i++) m=m*(k[i]+1);
cout<<m<<"\n";
v.clear();
k.clear();
}
}
