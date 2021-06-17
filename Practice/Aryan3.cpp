#include<bits/stdc++.h>
using namespace std;
struct array_single_char{
	char * data;
	int size;
};
string fun(array_single_char productID){
	int answer =0;
	for(int i=0;i<productID.size;i++){
		if(productID.data[i]=='a'||engStr[i]=='e'||engStr[i]=='i'||engStr[i]=='o'||engStr[i]=='u') continue;
		answer++
	}
	return answer;
}
main(){
	array_single_char s; 
	cin>>s.size;
	for(int i=0;i<s.size;i++) cin>>s.data[i];
	cout<<fun(s);
}
