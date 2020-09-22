#include<iostream>
#include<string>
using namespace std;
main(){
	string s;
	cin>>s;
	int ni=0,nt=0,ne=0,nn=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='i') ni++;
		else if(s[i]=='t') nt++;
		else if(s[i]=='e') ne++;
		else if(s[i]=='n') nn++;
	}
	int flag=0;
	//cout<<ni<<" "<<nt<<" "<<ne<<" "<<nn<<"\n";
	if(ni<=nt&&ni<=ne/3) flag=ni;
	else if(nt<=ni&&nt<=ne/3) flag=nt;
	else if(ne/3<=ni&&ne/3<=nt) flag=ne/3;
	if(flag>1){
		if(nn>=(flag*2)+1) cout<<flag;
		else cout<<(nn-1)/2;
	}
	else{
		if(nn<=3*flag) cout<<nn/3;
		else cout<<flag;
	}
}
