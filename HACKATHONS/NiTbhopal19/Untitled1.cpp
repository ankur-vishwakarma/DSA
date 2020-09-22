#include<iostream>
using namespace std;
 class a{
	public:
	 int x=1;
};
class b:public a{
   public:
   	int x=2;
};
class c:public b{
	public:
	int x=3;
	void show(){
		cout<<a.x;
	}
};
main(){
	c obj;
	obj.show();
}
