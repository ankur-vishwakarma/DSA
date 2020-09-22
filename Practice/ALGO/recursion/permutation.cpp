#include<iostream>
using namespace std;
void swap(string s,int i,int j){
    char t=s[i];
    s[i]=s[j];
    s[j]=t;
}
void p(string s,int i,int j){
//	cout<<i<<" "<<j<<" ";
    if(i==s.length()||j==s.length()) return;
    else{
    	
	cout<<i<<" "<<j<<" ";
        cout<<s[i]<<s[j]<<endl;
        if(j<s.length()) p(s,i,j+1);
        if(i<s.length()) p(s,i+1,j);
    }
}
int main()
 {
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) p(s[i],0,0);
	return 0;
}
