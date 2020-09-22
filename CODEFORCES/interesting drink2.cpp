#include<iostream>
using namespace std;
void merge(int arr[], int beg, int mid, int end,int n)
{
int i=beg, j=mid+1, index=beg, temp[n], k;
while((i<=mid) && (j<=end))
{
if(arr[i] < arr[j])
{
temp[index] = arr[i];
i++;
}
else
{
temp[index] = arr[j];
j++;
}
index++;
}
if(i>mid)
{
while(j<=end)
{
	temp[index] = arr[j];
j++;
index++;
}
}
else
{
while(i<=mid)
{
temp[index] = arr[i];
i++;
index++;
}
}
for(k=beg;k<index;k++)
arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end,int n)
{
int mid;
if(beg<end)
{
mid = (beg+end)/2;
merge_sort(arr, beg, mid,n);
merge_sort(arr, mid+1, end,n);
merge(arr, beg, mid, end,n);
}
}
int binary(int a[],int start,int end,int p){
	int mid=(start+end)/2;
	if(a[mid]==p) return mid+1;
	else if(start==end){
		if(a[mid]<p) return mid+1;
		else return mid;
	}
	else if(p<a[mid]) binary(a,start,mid, p);
	else binary(a,mid+1,end,p);
}
main(){
int n;
cin>>n;
int s[n],i;
for(i=0;i<n;i++) cin>>s[i];
int q;
cin>>q;
int m[q];
for(i=0;i<q;i++) cin>>m[i];
merge_sort(s,0,n-1,n);
//for(i=0;i<n;i++) cout<<s[i]<<" ";
for(i=0;i<q;i++){
	int count=binary(s,0,n-1,m[i]);
	while(s[count]==m[i]) count++;
    cout<<count<<"\n";
}
}
