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
for(int i=0;a[i]!='$';i++) cout<<a[i];
cout<<endl;
//PASS 1
char symbols[1000],uu=0;
int lc=100;
for(int i=0;a[i]!='$';i++){
       // cout<<a[i]<<" hello ";
	char kk[100], hold,phold;
	int j=0,flag=0,ii;
		while(a[i]!=' '&&a[i]!=';'&&a[i]!=','&&a[i]!='$'&&a[i]!=':'){ /*cout<<a[i]<<" ";*/ 
 kk[j]=a[i],j++,i++;  }
                hold=a[i],phold=a[i-1];
                //cout<<hold<<"hold\n";
                if(hold==';') i++;
if(hold=='$'){ 
//for(int i=0;i<uu;i++) cout<<symbols[i];
cout<<"\nover";
 return 0; }		
else if(hold==' ')
{
     for(int k=0;b[k+2]!='$';k++)
			if(b[k]==kk[0]&&b[k+1]==kk[1]&&b[k+2]==kk[2]){ ii=b[k+4]-'0';
                cout<<lc<<" "<<kk[0]<<kk[1]<<kk[2]<<" ";
		lc+=ii;/*,cout<<ii<<endl;*/ }
                      
 }
             else if(hold==','||hold==';'){
                     if(kk[0]=='e'&&(kk[1]=='a'||kk[1]=='b'||kk[1]=='c'||kk[1]=='d')&&kk[2]=='x') cout<<kk[0]<<kk[1]<<kk[2]<<" ";
                   else{
                        cout<<kk[0]<<endl;
                        symbols[uu++]=kk[0];
                         symbols[uu++]=',';
                        uu++;
                         }
                  }
            else if(hold==':'){
         // cout<<hold<< " "<<phold<<endl;
          if(phold=='a'){
cout<<"\nSYMBOL  TABLE\n";
        /* for( int r=i;a[r]!='$';r++) cout<<a[r]<<" ";
         cout<<endl;*/
        while(a[i]!=':'){
                while(a[i]!='e'&&a[i+1]!='q'&&a[i+2]!='u'&&a[i]!=':') i++;
          if(a[i]!=':'){ 
          cout<<a[i-2]<<" ";
          while(a[i]!=';'&&a[i]!=':') i++;
          int kkk=a[i-1]-'0';
          cout<<kkk<<endl;
                                                              }
                          }
          }
else if(phold=='s'){ cout<<"hellok\n"; }
          }
}
}
