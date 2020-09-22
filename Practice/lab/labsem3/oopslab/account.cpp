#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int i= 10000;
class account
{
string name;
int ac_no;
int amount;
public:
void get();
void update(int);
void show();
};
void account::get()
{
cout<<"enter name\n";
getline(cin,name);
cout<<"enter amount\n";
cin>>amount;
getchar();
ac_no=i;
i++;
}
void account::update(int sum)
{
amount=amount+sum;
}
void transfer(account & donor,account & reciever)
{
int sum;
cout<<"enter amount u wannna transfer\n";
cin>>sum;
donor.update(-sum);
reciever.update(sum);
cout<<"transferred succesfully\n";
}
void account::show()
{
cout<<"=====DETAILS=======\nname:"<<name<<"\naccount no:SI"<<ac_no<<"\namount:Rs"<<amount<<"\n\n";
}
main()
{
account a,b;
a.get();
b.get();
transfer(a,b);
a.show();
b.show();
}
