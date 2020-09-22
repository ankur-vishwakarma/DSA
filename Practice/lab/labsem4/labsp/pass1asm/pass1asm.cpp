#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
main(){
char s[100],a[1000];
vector<char> buffer;
//vector<char> a;
for(int i=0;i<100;i++) s[i]='$';
int j=0,k=0;
ifstream  ifile;

//READING INPUT CODE
ifile.open("input.txt");
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
a[j++]=s[k++];
}
//a[j++]=' ';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
while(j<1000) a[j++]='$';
//cout<<endl;
//for(int i=0;a[i]!='$';i++) cout<<a[i];

//READING MOT TABLE
j=0;
ifile.open("MOT.txt");
char b[1000];
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
b[j++]=s[k++];
}
b[j++]=' ';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
b[j]='$';
//cout<<endl;

//PASS 1
int lc=100;
k=0;
int trav=0;
while(a[trav]!='$'){
if(a[trav+1]=='$') return 0;
char buf[4];
cout<<lc<<" ";
for(int ll=0;ll<3;ll++) cout<<a[trav],buf[ll]=a[trav++];
//cout<<buf[0]<<buf[1]<<buf[2];
while(a[trav]!=';') cout<<a[trav++];
cout<<endl;
trav+=2;
char bfr;
int flag=0;
for(int ll=0;b[ll+2]!='$';ll++) if(buf[0]==b[ll]&&buf[1]==b[ll+1]&&buf[2]==b[ll+2]) flag=1,bfr=b[ll+4];
//cout<<bfr<<"hellobfr\n";
if(flag==0){
 cout<<"ERROR:mot table doesnt contain length of instruction "<<buf[0]<<buf[1]<<buf[2];
return 0;
}
flag=0;
lc=lc+(bfr-'0');
//cout<<a[trav]<<"here\n";
}






}

