#include<bits/stdc++.h>
using namespace std;
main(){
char a[1000],s[100];
for(int i=0;i<100;i++) s[i]='$';
ifstream ifile;
ifile.open("MOT.txt");
int j=0;
while(!ifile.eof()){
ifile.getline(s,100);
int k=0;
while(s[k]!='$') a[j++]=s[k++];
a[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
for(int i=j-1;i<1000;i++) a[i]='$';
for(int i=0;a[i]!='$';i++) cout<<a[i];

map <string,int> mot;
int i=0;
while(a[i]!='$'){
vector <char> buf;
while(a[i]!=','&&a[i]!='$') buf.push_back(a[i]),i++;
string buff(buf.begin(),buf.end());
i++;
int val=a[i]+'0'; 
cout<<buff<<" "<<val<<endl;
//mot.insert(make_pair(buff,val));
i++;
}
/*map<string,int> ::iterator it=mot.begin();
for(;it!=mot.end();++it) cout<<it->first<<" "<<it->second<<endl;*/
}
