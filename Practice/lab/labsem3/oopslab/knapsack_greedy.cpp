#include<iostream>
using namespace std;
void swap(int &a,int &b){
int t=a;
a=b;
b=t;
}
main(){
int n,wt;
cout<<"enter weight of kanpsack:\n";
cin>>wt;
cout<<"enter number of pairs:\n";
cin>>n;
double s[n][2],t[n];
cout<<"enter price and weight separated with space:\n";
for(int i=0;i<n;i++) cin>>s[i][0]>>s[i][1];
for(int i=0;i<n;i++) t[i]=s[i][0]/s[i][1];
for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(t[i]<t[j]) swap(t[i],t[j]),swap(s[i][0],s[j][0]),swap(s[i][1],s[j][1]);
float profit=0;
for(int i=0;i<n;i++){
if(wt>=s[i][1]) wt-=s[i][1],profit+=s[i][0];
else{
profit+=(t[i]*wt);
 break;
}
//cout<<wt<<" "<<profit<<endl;
}
cout<<"maximum profit is: "<<profit;
}
