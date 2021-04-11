#include<bits/stdc++.h>
using namespace std;
struct Result{
  Result():output1(){};
  int output1[100];
};

Result arrange(int input1,int input2[]){
  struct Result ans;
  int odd[100],even[100],e=0,o=0;
  for(int i=0;i<input1;i++){
  	if(input2[i]%2==0) even[e++]=input2[i];
  	else odd[o++]=input2[i];
  }
  sort(even,even+e);
  sort(odd, odd+o);
  o=0,e=0;
  int flag=1;
  if(even[0]<odd[0]) flag=0;
  for(int i=0;i<input1;i++){
  	if(flag)  ans.output1[i]=odd[o++],flag=0;
  	else ans.output1[i]=even[e++],flag=1;
  }
  return ans;
}

int main(){
int n;
cin>>n;
int s[n];
for(int i=0;i<n;i++) cin>>s[i];
struct Result ans = arrange(n,s);
for(int i=0;i<n;i++) cout<<ans.output1[i]<<endl;
}
