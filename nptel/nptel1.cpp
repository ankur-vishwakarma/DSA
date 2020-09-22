#include<iostream>
#include<string>
using namespace std;
main()
{
int n;
cin>>n;
string s[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++)
{
for(int j=0;s[i][j]!='\0';j++)
{
if(s[i][j]>=97&&s[i][j]<=99) s[i][j]='2';
else if(s[i][j]>=100&&s[i][j]<=102) s[i][j]='3';
else if(s[i][j]>=103&&s[i][j]<=105) s[i][j]='4';
else if(s[i][j]>=106&&s[i][j]<=108) s[i][j]='5';
else if(s[i][j]>=109&&s[i][j]<=111) s[i][j]='6';
else if(s[i][j]>=111&&s[i][j]<=115) s[i][j]='7';
else if(s[i][j]>=116&&s[i][j]<=118) s[i][j]='8';
else s[i][j]='9';
}
}
int count=1,max=1;
string flag;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++) if(s[j]==s[i]) count++;
if(count>max)
{
    max=count;
flag=s[i];
}
count=1;
}
cout<<flag;
}




