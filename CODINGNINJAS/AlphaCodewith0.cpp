#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
char out[5001]; int k=-1;
unordered_map <string,bool> p;
void alphacode(string s,int i){
	cout<<i<<endl;
	if(s[i]=='\0'){
		out[k+1]='\0';
		if(!p[out]){
			cout<<out<<endl;
		    p[out]=true;
		}
		return;
	}
		if(s[i]-48!=0) k++,out[k]=(char)(s[i]-48)+96;
	    alphacode(s,i+1);
	    if(s[i]-48!=0) k--;
	
	if(s[i+1]!='\0'){
	int a=10*(s[i]-48),b=s[i+1]-48;
	cout<<a<<" "<<b<<" "<<a+b<<"\n";
	int flag=0,flga=0,flgb=0;
	if(a+b<=26&&a!=0){
		k++,out[k]=(char)(a+b)+96;
		flag=1;
	}
	else{
	if(a!=0) k++,out[k]=(char)(a/10)+96,flga=1;
	if(b!=0) k++,out[k]=(char)(b)+96,flgb=1;
	flag+=(flga+flgb);
	}
	alphacode(s,i+2);
	k-=flag;
	}
}
main(){
	while(true){
		string s;
	    cin>>s;
	    if(s=="0") break;
	    k=-1,p.clear();
	    alphacode(s,0);
	    cout<<p.size()%M<<endl;
	}
}
