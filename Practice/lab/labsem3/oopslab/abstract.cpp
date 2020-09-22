#include<iostream>
using namespace std;
class base{
public:
virtual void show()=0;
};
class derived: public base{
int a;
public:
derived()
{
a=100;
}
void show()
{
cout<<"in derived:"<<a;
}
};
main()
{
derived obj;
obj.show();
}
