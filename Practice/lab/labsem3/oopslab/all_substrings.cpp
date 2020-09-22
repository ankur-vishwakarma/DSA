#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main() {
    char arr[20];
    cin>>arr;
    int n=strlen(arr);
    int noofsubs=pow(2,n);
    int i,j;
   // cout<<"null "<<arr<<" "; 
    for(i=0;i<noofsubs;i++)
	{
cout<<i<<endl;
		int k=i; 
		for(j=0;j<n;++j)
		{
		if(k%2==0)
		cout<<arr[j];
		k=k>>1;
		}
	cout<<" ";
	}
}
