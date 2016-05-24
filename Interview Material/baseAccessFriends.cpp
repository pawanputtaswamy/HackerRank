using namespace std;
#include <iostream>

class base
{
	friend class derived;
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

class derived
{
private:
	int u, v;
public:
	derived(int c, int d)
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
		base b(u, v);
		b.a = 11;
		b.b = 12;
		b.print();
	}
};


int main()
{
	derived d(10,20);
	d.print();
	d.~derived();
	return 0;
}