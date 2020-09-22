#include<iostream>
using namespace std;
main(){
	string s;
	cout<<"enter address\n";
	cin>>s;
	int n,count=0;
	cout<<"enter no. of blocks of cache\n";
	cin>>n;
    
    while(n>1) count++,n/=2;
    cout<<"Tag:";
    for(int i=0;i<s.length()-count-4;i++) cout<<s[i];
    cout<<endl;
    cout<<"Block:";
    for(int i=s.length()-count-4;i<s.length()-4;i++) cout<<s[i];
    cout<<endl;
    cout<<"word:";
    for(int i=s.length()-4;i<s.length();i++) cout<<s[i];
    cout<<endl;
}
