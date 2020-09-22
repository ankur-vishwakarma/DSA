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
ifile.open("ml.txt");
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
b[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
j=j-1;
while(j<1000) b[j-1]='$',j++;
//cout<<endl;
for(int i=0;a[i]!='$';i++) cout<<a[i];
cout<<endl;
for(int i=0;b[i]!='$';i++) cout<<b[i];
cout<<endl;

//READING ST
j=0;
ifile.open("st.txt");
char c[1000];
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
c[j++]=s[k++];
}
c[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
j=j-1;
while(j<1000) c[j-1]='$',j++;
for(int i=0;c[i]!='$';i++) cout<<c[i];
cout<<endl;

//READING LT
j=0;
ifile.open("lt.txt");
char d[1000];
while(!ifile.eof()){
ifile.getline(s,100);
k=0;
while(s[k]!='$'){
// cout<<s[k],
d[j++]=s[k++];
}
d[j++]=';';
for(int i=0;i<100;i++) s[i]='$';
}
ifile.close();
while(j<1000) d[j-1]='$',j++;
for(int i=0;d[i]!='$';i++) cout<<d[i];
cout<<endl;

//ARRANGING MOT IN MAP
map <string,string> m;
for(int i=0;b[i-1]!='$';i++){
vector<char> v;
while(b[i]!=','&&b[i]!='$') v.push_back(b[i]),i++; 
string k(v.begin(),v.end());
cout<<k<<" ";
v.clear();
i++;
//if(b[i+1]!='$') num=b[i+1]-'0';
while(b[i]!=';'&&b[i]!='$'&&b[i]!='\0'&&b[i]!='\n') v.push_back(b[i]),i++;
string num(v.begin(),v.end());
cout<<num<<endl;
m.insert(make_pair(k,num));
i++;
v.clear(),k.clear();
}

//map check
map<string, string>::iterator itr; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

//ARRANGING ST IN MAP
map <string,string> st;
for(int i=0;c[i-1]!='$';i++){
vector<char> v;
while(c[i]!=','&&c[i]!='$') v.push_back(c[i]),i++; 
string k(v.begin(),v.end());
cout<<k<<" ";
v.clear();
i++;
//if(b[i+1]!='$') num=b[i+1]-'0';
while(c[i]!=';'&&c[i]!='$'&&c[i]!='\0'&&c[i]!='\n') v.push_back(c[i]),i++;
string num(v.begin(),v.end());
cout<<num<<endl;
st.insert(make_pair(k,num));
i++;
v.clear(),k.clear();
}

//map check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = st.begin(); itr != st.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 

//ARRANGING LT IN MAP
map <string,string> lt;
for(int i=0;d[i-1]!='$';i++){
vector<char> v;
while(d[i]!=','&&d[i]!='$') v.push_back(d[i]),i++; 
string k(v.begin(),v.end());
cout<<k<<" ";
v.clear();
i++;
//if(b[i+1]!='$') num=b[i+1]-'0';
while(d[i]!=';'&&d[i]!='$'&&d[i]!='\0'&&d[i]!='\n') v.push_back(d[i]),i++;
string num(v.begin(),v.end());
cout<<num<<endl;
lt.insert(make_pair(k,num));
i++;
v.clear(),k.clear();
}

//map check
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = lt.begin(); itr != lt.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 


myfile.open("mlfinal.txt");
for(int i=0;a[i]!='$';i++){
//cout<<a[i]<<"j\n";
while(a[i]!=' '&&a[i]!='$') cout<<a[i],myfile<<a[i],i++;
cout<<" ",myfile<<" ";
i++;
//CHECKING PNEUMONICS
vector<char> v; 
while(a[i]!=' '&&a[i]!='$') v.push_back(a[i]),i++;
string k(v.begin(),v.end());
//cout<<k<<endl;
//if(k=="add") cout<<"h"<<endl;
if(m.find(k)!=m.end()){ cout<<m[k]<<" "; myfile<<m[k]<<" "; if(k=="int"){ cout<<"0x80\n"; myfile<<"0x80\n"; while(a[i]!=';'&&a[i]!='$') i++; continue;} }
else if(m.find(k)==m.end()&&k!="\n"){ cout<<"\npneumonic "<<k<<" doesnt exist in mot\n",myfile<<"\npneumonic "<<k<<" doesnt exist in mot\n"; return 0; }
v.clear(); k.clear(); i++;

//checking for registers n symbols
//CHECK 1
while(a[i]!=' '&&a[i]!='$') v.push_back(a[i]),i++;
string kk(v.begin(),v.end());
//cout<<kk<<" "; 
if(kk[0]=='['){
string chk(v.begin()+1,v.end()-1);
if(lt.find(chk)!=lt.end()) cout<<'['<<lt[chk]<<']'<<" ",myfile<<'['<<lt[chk]<<']'<<" ";
else cout<<"\nERROR: Literal "<<chk<<" not present in LT\n",myfile<<"\nERROR: Literal "<<chk<<" not present in LT\n";
}
else if(kk!="eax"&&kk!="ebx"&&kk!="ecx"&&kk!="edx") {
if(st.find(kk)!=st.end()) cout<<st[kk]<<" ",myfile<<st[kk]<<" ";
else if(lt.find(kk)!=lt.end()) cout<<lt[kk]<<" ",myfile<<lt[kk]<<" ";
else cout<<"ERROR: Symbol "<<kk<<" not present in ST\n",myfile<<"ERROR: Symbol "<<kk<<" not present in ST\n";
}
else cout<<kk<<" ",myfile<<kk<<" ";  
v.clear();  i++;

//CHECK 2
while(a[i]!=';'&&a[i]!='$') v.push_back(a[i]),i++;
string kkk(v.begin(),v.end()-1);
//cout<<kkk<<endl; /*myfile<<kkk<<"\n";
//if(kkk=="a") cout<<"yes";
if(kkk!="eax"&&kkk!="ebx"&&kkk!="ecx"&&kkk!="edx"){
if(st.find(kkk)!=st.end()) cout<<st[kkk]<<endl,myfile<<st[kkk]<<"\n";
else if(lt.find(kkk)!=lt.end()) cout<<lt[kkk]<<endl,myfile<<lt[kkk]<<"\n";
else cout<<"\nERROR: Symbol "<<kkk<<" not present in ST or LT\n",myfile<<"\nERROR: Symbol "<<kkk<<" not present in ST or LT\n";
}
v.clear();

}
myfile.close();






}

