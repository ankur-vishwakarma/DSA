#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int fact(int n){
	if(n==1||n==0) return 1;
	else return n*fact(n-1);
}
main(){
	string s,t;
	cin>>s>>t;
	std::cout << std::setprecision(9) << std::fixed;
	int p1=0,s1=0,p2=0,s2=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='+') p1++;
		if(t[i]=='+') p2++;
		if(s[i]=='-') s1++;
		if(t[i]=='-') s2++;
	}
	if(p2>p1||s2>s1) cout<<"0.000000000000";
	else if(p2==p1&&s2==s1) cout<<"1.000000000000";
	else{
		//cout<<"h";
		int q=t.length()-(p2+s2);
		float ans=0.5;
		for(int i=1;i<q;i++) ans*=0.5;
		int d=0,f=0;
		if(p2<p1) d=p1-p2;
		if(s2<s1) f=s1-s2;
		ans=(ans*fact(q))/(fact(d)*fact(f));
		//cout<<fact(q);
		cout<<ans;
	}
}
