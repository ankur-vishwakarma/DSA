#include<iostream>
using namespace std;
class lojit;
class ankur
{
	int i=5;
	public:
	show();
	friend lojit;
};
class lojit
{
	public:
	void inc(ankur & k)
{
	k.i++;
}	
};
ankur::show()
{
	cout<<"i="<<i<<"\n";
}
main()
{
	ankur p;
	lojit y;
	p.show();
	y.inc(p);
	p.show();
}
