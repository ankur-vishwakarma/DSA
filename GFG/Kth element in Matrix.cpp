#include<bits/stdc++.h>
#define MAX 1000
int mat[MAX][MAX];
using namespace std;
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int min[n];
  for(int i=0;i<n;i++) min[i]=mat[i][0];
  //finding min frm min n pushing nxt
  int mn,in;
  int col[n]={0};
  while(k--){
      mn=101,in=0;
      for(int i=0;i<n;i++) if(min[i]<mn&&col[i]<n) mn=min[i],in=i;
      min[in]=mat[in][++col[in]];
      /*for(int i=0;i<n;i++) cout<<min[i]<<" ";
      cout<<endl;
      for(int i=0;i<n;i++) cout<<col[i]<<" ";
      cout<<endl;*/
  }
  return mn;
}
main(){
	int t;
    cin>>t;
while(t--)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>mat[i][j];
        int r;
        cin>>r;
    cout<<kthSmallest(mat,n,r)<<endl;
}
}
