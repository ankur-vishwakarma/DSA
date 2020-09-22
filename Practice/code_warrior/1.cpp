#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
if(n<2) return false;
else{
int flag=0;
for(int i=2;i*i<n;i++) if(n%i==0){ flag=1; return false; }
if(flag!=1) return true; }
}
/*vector<int> facs(int n) {
vector<int> f;
for (int x = 2; x*x <= n; x++) {
while (n%x == 0) {
f.push_back(x);
n /= x;
}
}
if (n > 1) f.push_back(n);
return f;
}*/
main(){
	int t;
	cin>>t;
	int s[t][2];
for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1];
//vector<int > fac=facs(1000000000);
	for(int i=0;i<t;i++){
		vector<int> a,b,c;
int p=s[i][0],q=s[i][1];
while(p!=0){ a.push_back(p%2); p/=2; }
while(q!=0){ b.push_back(q%2); q/=2; }

if(a.size()<b.size()) while(a.size()<b.size()) a.push_back(0);
else if(b.size()<a.size()) while(b.size()<a.size()) b.push_back(0);

/*for(int j=0;j<a.size();j++) cout<<a[j];
cout<<endl;
for(int j=0;j<b.size();j++) cout<<b[j];*/

for(int j=0;j<a.size();j++){
if(a[j]==b[j]) c.push_back(0);
else c.push_back(1);
}
/*cout<<endl;
for(int j=0;j<c.size();j++) cout<<c[j];*/
long long num=0;
for(int j=0;j<c.size();j++) num+=(c[j]*pow(2,j));
//cout<<num<<endl;
/*int hold=0;

for(int j=0;fac[j]<=num/2&&hold==0;j++){
int k=num-fac[j];
 int beg=0,end=1000000000-1;
	 while(beg<=end){
		 int mid=(beg+end)/2;
		// cout<<beg<<" "<<mid<<" "<<end<<endl;
		 if(fac[mid]==k){ cout<<"yes\n",hold=1; break; }
		 else if(k<fac[mid]) end=mid-1;
		 else beg=mid+1;
	                                }
                 }
if(hold!=1) cout<<"no\n";*/
int flag=0;
/*for(int i=2;i<=num/2;i++){
if(isprime(i)){
     if(isprime(num-i)){ cout<<"yes\n",flag=1;  break; }}
                                }
     if(flag!=1) cout<<"no\n";*/
for(int i=num/2;i>1;i--){
if(isprime(i)){
     if(isprime(num-i)){ cout<<"yes\n",flag=1;  break; }}
                                }
     if(flag!=1) cout<<"no\n";
	}
}
// cout<<t%2<<endl; 
