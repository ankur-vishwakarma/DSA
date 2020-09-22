#include<bits/stdc++.h>
using namespace std;
string s1[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printKeypad(int num,string s=""){
    if(num==0){
        cout<<s<<endl;
    }
    for(int i=0;i<s1[num%10].length();i++){
    	//cout<<s1[num%10][i]+s<<" ";
        printKeypad(num/10,s1[num%10][i]+s);
    }
}


main(){
	int n;
	cin>>n;
	printKeypad(n);
}
