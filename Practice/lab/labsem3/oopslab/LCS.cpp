#include<iostream>
#include<string>
using namespace std;
int stk[100][100];
void LCS(string,string,int,int);
int max(int,int);
//string backtrack(int  r,int c,int mat[][c]);
string backtrack(int r,int c,string s,string t,int a,int b){
if(a==0&&b==0) return "\0";
else{
int l=0,u=0;
if(stk[a][b-1]==stk[a][b]) l=1;
if(stk[a-1][b]==stk[a][b]) u=1;
if((l==0&&u==0)&&(s[a-1]==t[b-1])) return s[a-1]+backtrack(r,c,s,t,a-1,b-1);
else{
if(l==1&&b-1>=0) return backtrack(r,c,s,t,a,b-1);
if(u==1&&a-1>=0) return backtrack(r,c,s,t,a-1,b);
}
}
}
main(){
string a,b;
cout<<"enter strings:\n";
cin>>a>>b;
int l1=0,l2=0;
for(int i=0;a[i]!='\0';i++) l1++;
for(int i=0;b[i]!='\0';i++) l2++;
LCS(a,b,l1,l2);
}
int max(int a,int b){
if(a>b) return a;
else return b;
}
void LCS(string a,string b,int l1,int l2){
int r=0,c=0;
string s,t;
if(l1<l2) r=l1+1,c=l2+1,s=a,t=b;
else r=l2+1,c=l1+1,s=b,t=a;
int mat[r][c];

//TABLE CREATION
for(int i=0;i<c;i++) mat[0][i]=0;
for(int i=0;i<r;i++) mat[i][0]=0;
for(int i=1;i<r;i++){
for(int j=1;j<c;j++){
if(s[i-1]==t[j-1]) mat[i][j]=mat[i-1][j-1]+1;
else mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
//cout<<mat[i][j]<<" ";
stk[i][j]=mat[i][j];
}
//cout<<endl;
}
int j=0;
string com=backtrack(r,c,s,t,r-1,c-1);
for(int i=0;com[i]!='\0';i++) j++;
cout<<"LCS of above two strings is:\n";
for(int i=j;i>=0;i--) cout<<com[i];

}

