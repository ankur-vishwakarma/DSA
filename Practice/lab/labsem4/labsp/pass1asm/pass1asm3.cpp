#include<bits/stdc++.h>
using namespace std;
main(){
char s[100],a[1000];
//vector<char> a;
for(int i=0;i<100;i++) s[i]='$';
int j=0,k=0;
ifstream  ifile;
ofstream myfile;
//READING INPUT CODE
ifile.open("inputtst.txt");
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
a[j++]=s[k++];
}
a[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
j=j-2;
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
for(int i=0;a[i]!='$';i++) cout<<a[i];
cout<<endl;
for(int i=0;b[i]!='$';i++) cout<<b[i];
cout<<endl;

//ARRANGING MOT IN MAP
map <string,int> m;
for(int i=0;b[i-1]!='$';i++){
vector<char> v;
while(b[i]!=','&&b[i]!='$') v.push_back(b[i]),i++; 
string k(v.begin(),v.end());
//cout<<k<<" ";
int num;
//if(b[i+1]!='$') num=b[i+1]-'0';
while(b[i]!=' '&&b[i]!='$') i++;
num=b[i-2]-'0';
m.insert(make_pair(k,num));
//cout<<num<<endl;
v.clear(),k.clear();
}

//map check
map<string, int>::iterator itr; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

int lc=100;
//PASS1

//section.text
map<string,int> st;
map<string,int> lt;
int p=0;
char hold;

while(a[p]!=':'&&a[p]!='$') p++;
if(a[p]=='$'){ cout<<"assembler error"; return 0; }

//integrating pot to find section .data and .bss
int df=0,bf=0,ki=0,pbf,pdf;
vector<char> buffer;
while(a[ki]!='$'){
while(a[ki]!='.'&&a[ki]!='$') ki++;
ki++;
while(a[ki]!=';'&&a[ki]!='$') buffer.push_back(a[ki]),ki++;
string ch(buffer.begin(),buffer.end());
//ch=ch+"\0";
//cout<<ch.length()<<" "<<ch<<endl;
if(ch[0]=='d'&&ch[1]=='a'&&ch[2]=='t'&&ch[3]=='a'){ bf=ki-1,pbf=ki+1; while(a[bf]!=';') bf--; } //why ch=="data" not working
else if(ch[0]=='b'&&ch[1]=='s'&&ch[2]=='s'){ df=ki-1,pdf=ki+1;  while(a[df]!=';') df--; }
ch.clear(); buffer.clear();
ki++;
}
//cout<<a[bf]<<" "<<a[df]<<endl;
myfile.open("ml.txt");
for(int i=p+3;i<bf&&i<df&&a[i]!='$';i++){
//cout<<a[i]<<"j\n";

//CHECKING PNEUMONICS
vector<char> v; 
while(a[i]!=' '&&i<bf&&i<df&&a[i]!='$') v.push_back(a[i]),i++;
string k(v.begin(),v.end());
//cout<<k<<endl;
//if(k=="add") cout<<"h"<<endl;
if(m.find(k)!=m.end()){ cout<<lc<<" "<<k<<" "; myfile<<lc<<" "<<k<<" "; lc+=m[k];  if(k=="int"){ cout<<"0x80\n"; myfile<<"0x80\n"; while(a[i]!=';'&&a[i]!='$') i++; continue;} }
else if(m.find(k)!=m.end()&&k!="\n"){ cout<<"pneumonic "<<k<<" doesnt exist in mot\n"; return 0; }
v.clear(); k.clear(); i++;

//checking for registers n symbols
//CHECK 1
while(a[i]!=','&&i<bf&&i<df&&a[i]!='$') v.push_back(a[i]),i++;
string kk(v.begin(),v.end());
cout<<kk<<" "; myfile<<kk<<" ";
if(kk[0]=='['){ 
string hhh(v.begin()+1,v.end()-1);
lt.insert(make_pair(hhh,0));
}
else if(kk!="eax"&&kk!="ebx"&&kk!="ecx"&&kk!="edx") st.insert(make_pair(kk,-1));

v.clear();  i++;
//CHECK 2
while(a[i]!=';'&&i<bf&&i<df&&a[i]!='$') v.push_back(a[i]),i++;
string kkk(v.begin(),v.end()-1);
cout<<kkk<<endl; myfile<<kkk<<"\n";
if(kkk!="eax"&&kkk!="ebx"&&kkk!="ecx"&&kkk!="edx") st.insert(make_pair(kkk,-1));
v.clear();

}
myfile.close();

//st check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = st.begin(); itr !=st.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

//lt check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = lt.begin(); itr !=lt.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
//SYMBOL TABLE FROM SECTION .DATA
for(int i=pbf;i<df&&a[i]!='$';i++){
vector<char> v;
while(a[i]!=' '&&i<df&&a[i]!='$') v.push_back(a[i]),i++;
string key(v.begin(),v.end());
//key.push_back('\0');
cout<<key<<" ";

i++;
while(a[i]!=' '&&i<df&&a[i]!='$') i++;
i++; 
vector<int> y;
while(a[i+1]!=';'&&i<df&&a[i]!='$') y.push_back(a[i]-'0'),i++;
int si=0,num=0;
//for(int l=0;l<y.size();l++) cout<<y[l]<<" ";
while(si<y.size()){ num+=(y[si]*pow(10,y.size()-si-1)); si++; }
cout<<num<<endl;
if(st.find(key)!=st.end()) st[key]=num;
else st.insert(make_pair(key,num));
i++;
}

//st check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = st.begin(); itr !=st.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

//LITERAL TABLE FROM SECTION.BSS
for(int i=pdf;a[i]!='$';i++){
vector<char> v;
while(a[i]!=' '&&a[i]!='$') v.push_back(a[i]),i++;
string key(v.begin(),v.end());
//key.push_back('\0');
cout<<key<<" ";

i++; v.clear();
while(a[i]!=' '&&a[i]!='$') v.push_back(a[i]),i++;
string op(v.begin(),v.end());
cout<<op<<endl;
i++; 
int base=0,mem=1;
if(op=="resb") base=1;
else if(op=="resw") base=2;
else if(op=="resd") base=4;
else if(op=="resq") base=8;
else if(op=="rest") base=10;
else base=1;
vector<int> y;
while(a[i]!=';'&&a[i]!='$'&&a[i]!='\0') y.push_back(a[i]-'0'),i++;

int si=0,num=0;
//for(int l=0;l<y.size();l++) cout<<y[l]<<"aa ";
while(si<y.size()){ num+=(y[si]*pow(10,y.size()-si-1)); si++; }
mem=base*num;
cout<<mem<<endl;
if(lt.find(key)!=lt.end()) lt[key]=lc;
else lt.insert(make_pair(key,lc));
lc+=mem;
i++;

}
//lt check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = lt.begin(); itr !=lt.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 


//ERROR CHECKING
//st check
    for (itr = st.begin(); itr !=st.end(); ++itr) { 
        if( itr->second ==-1) cout<<"ERROR: invalid symbol "<<itr->first<<endl;
    } 
    cout << endl; 
//lt check
    for (itr = lt.begin(); itr !=lt.end(); ++itr) { 
        if(itr->second==-1) cout<<"ERROR: invalid symbol "<<itr->first<<endl;
    } 
    cout << endl; 

//GENERATING SYMBOL TABLE OUTPUT IN FORM OF TXT
myfile.open("st.txt");
for (itr = st.begin(); itr !=st.end(); ++itr) { 

myfile<<itr->first<<","<<itr->second<<"\n";
    } 
myfile.close();

//GENERATING  LITERAL TABLE OUTPUT IN FORM OF TXT
myfile.open("lt.txt");
for (itr = lt.begin(); itr !=lt.end(); ++itr) { 
myfile<<itr->first<<","<<itr->second<<"\n";
    } 
myfile.close();






}
