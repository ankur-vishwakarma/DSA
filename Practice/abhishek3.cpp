#include<iostream>
using namespace std;
template<typename T>
void f(const T& x){
	static int i=10;
	cout<<++i;
	return;
}
main(){
	f<int>(1);
	cout<<endl;
	f<int>(2);
	cout<<endl;
	f<double>(1.1);
	cout<<endl;
	
	int x=2,y=3;
	int r=x-((x-y)&((x-y)>>(sizeof(int) * CHAR_BIT-1)));
	printf("%d ",r);
}
