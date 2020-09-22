#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
char out[5001]; int k=-1;
unordered_map <string,bool> p;
void alphacode(string s,int i){
	//cout<<i<<endl;
	if(s[i]=='\0'){
		out[k+1]='\0';
		if(!p[out]){
			//cout<<out<<endl;
		    p[out]=true;
		}
		return;
	}
	k++,out[k]=(char)(s[i]-48)+96;
	alphacode(s,i+1);
	k--;
	
	if(s[i+1]!='\0'){
	int a=10*(s[i]-48),b=s[i+1]-48;
	//cout<<a<<" "<<b<<" "<<a+b<<"\n";
	int flag=0;
	if(a+b<=26){
		k++,out[k]=(char)(a+b)+96;
		flag=1;
	}
	else{
	k++,out[k]=(char)(a/10)+96;
	k++,out[k]=(char)(b)+96;
	flag=2;
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
