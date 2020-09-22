#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N)
{
  int cs,ms,as;
  for(int i=0;i<N;i++) as+=A[i];
  for(int i=0;i<N;i++) cs+=(i*A[i]);
  ms=cs;
  for(int i=0;i<N;i++){
      cs=cs+as-A[N-i-1]-((N-1)*A[N-i-1]);
      if(cs>ms) ms=cs;
      cout<<cs<<"n\n";
  }
  return ms;
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<max_sum(s,n);
}
