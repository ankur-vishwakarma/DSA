#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	//cout<<input<<endl;
	if(input[0]=='\0') return;
	if(input[1]==input[0]){
		int i=1,j=1;
		while(input[i]==input[0]&&input[i]!='\0') i++;
		//cout<<i<<endl;
		while(input[j]!='\0'){
			input[j]=input[i];
			i++,j++;
		}
		input[i]='\0';
	}
	removeConsecutiveDuplicates(input+1);
}
main(){
	char s[1001];
	cin>>s;
	removeConsecutiveDuplicates(s);
	cout<<s<<endl;
}
