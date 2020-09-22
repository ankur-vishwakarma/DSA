#include<iostream>
using namespace std;
class ankur
{
	int i=5;
	public:
		show();
		friend void inc(ankur &);
};
ankur::show()
{
	cout<<"i="<<i<<"\n";
}
void inc(ankur & k)
{
	k.i++;
}
main()
{
	ankur p;
	p.show();
	inc(p);
	p.show();
	inc(p);
	p.show();
}
