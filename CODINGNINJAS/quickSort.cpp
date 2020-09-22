#include<bits/stdc++.h>
using namespace std;
void quickSort(int input[], int ei, int si = 0) {
	
	if(si>=ei) return;
    int pivot=input[ei];
    //cout<<si<<" "<<ei<<" "<<pivot<<endl;
    int part=si-1;
    for(int i=si;i<ei;i++){
    	if(input[i]>pivot) continue;
    	else{
    		part++;
    		int tmp=input[part];
    		input[part]=input[i];
    		input[i]=tmp;
		}
	}
	//pivot
	part++;
	int tmp=input[part];
    input[part]=input[ei];
    input[ei]=tmp;
    //recur
    quickSort(input,part-1,si);
    quickSort(input,ei,part+1);
    return;
}
main(){
	int n;
	cin>>n;
	int *s=new int[n];
	for(int i=0;i<n;i++) cin>>s[i];
	quickSort(s,n-1,0);
	for(int i=0;i<n;i++) cout<<s[i]<<" ";
}
