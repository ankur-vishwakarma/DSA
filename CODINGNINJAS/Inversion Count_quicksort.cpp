#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;
int c=0;
void swap(int &a,int & b){
	int tmp=a;
	a=b;
	b=tmp;
}
int pivotfinder(int * s,int b,int e){
	int pivot=s[e];
	int i=-1;
	for(int j=b;j<=e;j++){
		if(s[j]<=pivot) i++;
	}
	i++;
	c+=(e-i);
	swap(s[pivot],s[i]);
	return i;
}
void quicksort(int * s,int b,int e){
	cout<<b<<" "<<e<<endl;
	if(b>=e) return;
	int pivot=pivotfinder(s,b,e);
	cout<<pivot<<endl;
	quicksort(s,b,pivot-1);
	quicksort(s,pivot+1,e);
	return;
}
long long solve(int A[], int n)
{
	quicksort(A,0,n-1);
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
