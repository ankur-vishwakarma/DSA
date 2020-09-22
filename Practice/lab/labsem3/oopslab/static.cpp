#include<iostream>
using namespace std;
class e{
public:
static int c;
e()
{
c++;
cout<<"constructor calling";
}
~e()
{
c--;
cout<<"destructing";
}
};
int e::c=0;
main()
{
e obj,obj1;
cout<<e::c;
}
