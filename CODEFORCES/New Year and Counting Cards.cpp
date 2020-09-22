#include<iostream>
#include<string>
using namespace std;
main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
		count++;
    }
	cout<<count;
}
