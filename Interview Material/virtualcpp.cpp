using namespace std;

#include <iostream>

class exmp1
{
public:
	exmp1()
	{
		cout << "inside exmp1 constructor" << endl;
	}

	~exmp1()
	{
		cout << "Inside exmp1 destructor" << endl;
	}
};

class exmp2: public exmp1
{
public:
	exmp2()
	{
		cout << "inside exmp2 constructor" << endl;
	}

	~exmp2()
	{
		cout << "Inside exmp2 destructor" << endl;
	}
};
/*
int main()
{
	exmp2* e2 = new exmp2();
	exmp1 *e1 = e2;
	delete e1;
	getchar();
	return 0;
}
*/