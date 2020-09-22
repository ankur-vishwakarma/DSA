#include<iostream>
using namespace std;
main()
{
	int n,p;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int left=0,right=n-1,se=0,di=0,flag=0;
	while(left!=right){
		if(flag%2==0){
			if(s[left]>s[right]){
				se+=s[left];
				left++;
			}
			else{
			    se+=s[right];
			    right--;
			}
			flag++;
		}
		else{
			if(s[left]>s[right]){
				di+=s[left];
				left++;
			}
			else{
			    di+=s[right];
			    right--;
			}
			flag++;
		}
	}
	if(flag%2==0) se+=s[left];
	else di+=s[left];
	cout<<se<<" "<<di;
}
