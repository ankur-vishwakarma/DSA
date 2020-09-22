#include<iostream>
using namespace std;
void merge(int a[],int m,int b[],int n,int c[]);
void mergesort(int s[],int start,int end){
	if(end-start>1){
		int i,mid=(start+end)/2;
		//int a[mid-start],b[end-mid];
		mergesort(s,start,mid);
		mergesort(s,mid,end);
		merge(s,mid-start,s,end-mid,s);
		/*printf("s=%d e=%d\n",start,end);
		for(i=start;i<end;i++) printf("%d ",c[i]);
		printf("\n");*/
		}
}
void merge(int a[],int m,int b[],int n,int c[]){
	int i=0,j=0,k=0;
	/*for(i=0;i<m;i++) printf("%d ",a[i]);
	printf("apart\n");
	for(i=0;i<n;i++) printf("%d ",b[i]);
	printf("bpat\n");
	i=0;*/
	while(k<m+n){
	   if(j==n||a[i]<=b[j]){
	   	c[k]=a[i];
	   	i++,k++;
	   }
	   if(i==m||b[j]<a[i]){
	   	c[k]=b[j];
	   	j++,k++;
	   }	
	}
	/*printf("merge");
	for(i=0;i<m+n;i++) printf("%d ",c[i]);
	printf("\n");*/
}

main(){
	int n;
    cin>>n;
    int s[n],i;
    for(i=0;i<n;i++) cin>>s[i];
    for(i=0;i<n;i++) cout<<s[i]<<" ";
    cout<<"\n";
	mergesort(s,0,n);
    for(i=0;i<n;i++) printf("%d ",s[i]);
}
