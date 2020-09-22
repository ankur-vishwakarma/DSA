#include<bits/stdc++.h>
using namespace std;
pair<int,pair<int,int> > maxsum(int *s,int strt,int end){
    if(strt>end) return {INT_MIN,{-1,-1}};
    if(strt==end) return {s[strt],{strt,strt}};
    int mid=(strt+end)/2;
    int left=maxsum(s,strt,mid);
    int right=maxsum(s,mid+1,end);
    //cout<<strt<<" "<<end<<" "<<left<<" "<<right<<endl;
    int total=left+right;
    if(total>left&&total>right)
    if(call==0) return max(left+right,max(left,right));
    else if(call==1) return max(right,left+right);
    else return max(left,left+right);
}
main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	cout<<maxsum(s,0,n-1,0);
}
/*
7
-1 5 -2 -3 4 3 1
*/
