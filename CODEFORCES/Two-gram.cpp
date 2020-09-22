#include<iostream>
#include<string>
using namespace std;
int compare(string a,string b){
	int count=0;
	for(int i=0;b[i+1]!='\0';i++) {
		if(a[0]==b[i]&&a[1]==b[i+1]) count++;
		//cout<<a[0]<<" "<<b[i]<<"\n";
	}
	return count;
}

main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	s=s+'\0';
	int max=0;
	char hold[3]={'\0'};
	
	for(int i=0;i<n-1;i++){
		char c[3]={'\0'};    //WHY THIS  CODE NOT WORKING WHN USING C AS STRING
	//	cout<<s[i]<<s[i+1]<<"\n";
		c[0]=s[i],c[1]=s[i+1];
		
		int count=compare(c,s);
		if(count>max){
			 max=count;
			 hold[0]=c[0],hold[1]=c[1];
		}
	}
	cout<<hold;
}
