#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int mod(int a,int b){
	if(b-a>0) return b-a;
	else a-b;
}
main(){
	string s,t;
	cin>>s>>t;
	std::cout << std::setprecision(9) << std::fixed;
	int dest=0,pos=0;
	for(int i=0;s[i]!='\0';i++){
	if(s[i]=='+')  dest++;
	else dest--;
	}
	int q=0;
	for(int i=0;t[i]!='\0';i++){
		if(t[i]=='+')  pos++;
	   else if(t[i]=='-') pos--;
      	else q++;
	}
	int dist=mod(pos,dest);
	float p=0.0;
	if(q>=dist){
		if(dist%2==0&&q%2==0||dist%2!=0&&q%2!=0){
		float total=1.0,num=1.0;
		int q1=q;
		for(int i=1;i<=q1;i++) total=total*2;
		for(int i=q1;i>=1;i--) num=num*i;
	//	cout<<total<<" "<<num<<"\n";
		p=(float)num/total;
		cout<<p;
	}
	}
	else cout<<p;
}
