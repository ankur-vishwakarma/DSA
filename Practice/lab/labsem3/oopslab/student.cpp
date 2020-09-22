#include<iostream>
#include<string>
using namespace std;
class student
{
char name[100];
string roll;
float sub1,sub2,sub3,avg;
public:
void get();
void calculate();
void show();
};
void student::get()
{
cout<<"enter name";
cin>>name;
cout<<"enter roll";
cin>>roll;
cout<<"enter marks of 3 sub";
cin>>sub1>>sub2>>sub3;
}
void student::calculate()
{
avg=(sub1+sub2+sub3)/3;
}
void student::show()
{
cout<<"name:"<<name<<"\nroll_no:"<<roll;
cout<<"\naverage is="<<avg<<"\n";
}
main()
{
student a,b;
a.get();
b.get();
a.calculate();
b.calculate();
a.show();
b.show();
}

