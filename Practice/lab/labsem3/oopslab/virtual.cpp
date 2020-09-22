#include<iostream>
using namespace std;
class base{
int a;
public:
base()
{
a=100;
}
virtual void show(){
cout<<"base value:"<<a<<"\n";
}
};
class derived:public base{
int b;
public:
derived(){
b=200;
}
void show(){
cout<<"deriveds value:"<<b<<"\n";
}
};
main()
{
base ob,*ptr;
ptr=&ob;
ptr->show();
derived obj;
ptr=&obj;
ptr->show();
}
