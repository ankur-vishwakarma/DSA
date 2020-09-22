#include<iostream>
using namespace std;
void merge(int s[],int beg,int mid,int end);
void mergesort(int s[],int beg,int end){
	//cout<<beg<<" "<<end<<endl;
	if(beg<end){
		cout<<beg<<" "<<end<<endl;
		int mid=(beg+end)/2;
		mergesort(s,beg,mid);
		//cout<<"he";
		mergesort(s,mid+1,end);
		merge(s,beg,mid,end);
	}
}
void merge(int s[],int beg,int mid,int end){
	for(int i=beg;i<=end;i++) cout<<s[i];
	int k=beg,i=beg,j=mid;
	int t[end+1],l=0;
	while(i<=mid-1&&j<=end){
		if(s[i]<s[j]) t[l]=s[i],i++,l++;
		else t[i]=s[j],j++,l++;
	}
	/*if(i!=mid-1) while(i!=mid-1){
		t[l]=s[i];
		l++,i++;
	}
	if(j!=end) while(j!=end){
		t[l]=s[j];
		l++,j++;
	}*/
	for(i=0;i<=end;i++) s[i]=t[i];
}
main(){
	int s[]={2,3,1,7,2,9,0};
	mergesort(s,0,6);
	for(int i=0;i<=6;i++) cout<<s[i]<<" ";
}
