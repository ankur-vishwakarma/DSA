#include<iostream>
using namespace std;
class base{
int a;
public:
base(int i){ 
cout<<"base constructor calling\n";
a=i;
}
int show(){
return a;
}
};
class child{
int k;
base obj;
public:
child(int i,int j):obj(j)
{
cout<<"delegates construct calling\n";
k=i;
}
int display(){
cout<<"value in base\n";
cout<<obj.show()<<"\n";
cout<<"value in delegated\n";
return k;
}
};
main()
{
child ob(2,3);
cout<<ob.display()<<"\n";
}
