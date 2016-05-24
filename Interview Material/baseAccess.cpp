using namespace std;
#include <iostream>

class base
{
private:
	int a, b;
public:
	base(int x, int y)
	{
		a = x;
		b = y;
		cout << "Inside base constructor" << endl;
	}
	~base()
	{
		cout << "Inside base destructor" << endl;
	}
	void print()
	{
		cout << "a: " << a << ", b: " << b << endl;
	}
};

class base1
{
private:
	int a, b;
public:
	base1(int x, int y)
	{
		a = x;
		b = y;
		cout << "Inside base constructor" << endl;
	}
	~base1()
	{
		cout << "Inside base destructor" << endl;
	}
	void print()
	{
		cout << "a: " << a << ", b: " << b << endl;
	}
};
class derived : public base, public base1
{
private:
	int u, v;
public:
	derived(int c, int d) : base(c, d), base1(c,d)
	{
		u = c;
		v = d;
		cout << "Inside derived constructor" << endl;
	}
	~derived()
	{
		cout << "Inside derived destructor" << endl;
	}
	void print()
	{
		cout << "u: " << u << ", v: " << v << endl;
		base::print();
	}
};

/*
int main()
{
	/*derived dd(4,5);
	dd.print();
	dd.~derived();*/
	/*derived* d = new derived(10,20);
	d->print();
	delete(d);*/
	//return 0;
//}
/*
class gamma : public alpha, public beta
{
	int u, v;
public:
	gamma(int a, int b, float c) : beta(c), alpha(2 * a)
	{
		u = a;
		v = b;
	}
	void show_gamma(){
		cout << "u = " << u << "\n";
		cout << "v = " << v << "\n";
	}
};
*/