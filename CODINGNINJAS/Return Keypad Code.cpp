#include <iostream>
#include <string>
using namespace std;
string a[]={"\0","\0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
char out[7];
int i=0,l=0;
int keypad(int num,string * output){
    //cout<<num<<endl;
    if(num==0){
        //output[i][l+1]='\0';
        //cout<<l<<"l\n";
        out[l+1]='\0';
        //cout<<out<<endl;
        output[i]=out;
        i++;
        return 1;
    }
    //if(k[])
    int k=num,j=0,n=1;
    while(k/10!=0) k/=10,n*=10;
    k=k%10;
    //cout<<k<<"ik\n";
    int count=0;
    if((k==1||k==0)) count+=keypad(num-k*n,output);
    while(a[k][j]!='\0'){
        /*output[i][l]=a[k][j];
        output[i][l+1]='\0';
        cout<<output[i]<<" "<<output[i][l]<<endl;*/
        out[l]=a[k][j];
        l++;
        count+=keypad(num-k*n,output);
        l--,j++;
    }
    return count;
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

