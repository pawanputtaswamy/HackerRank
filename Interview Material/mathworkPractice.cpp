using namespace std;
#include <iostream>
#include "externcheck.h"

class base
{
private:
	char* name;
};

class derived
{
};

class example
{
	double d1;
public:
	example(double dd) : d1(dd){}

	virtual void getname();

	virtual void setName() = 0;
};

int main()
{
	 // Will this work Question1
	char *p = "hello";
	*p++; // works, as it increments the pointer , o/p => "ello"
	cout << *p; // prints 'e' as *p points to first block
	

	/* Question2, will this compile? Ans: Yes, it will compile. 
	base* b1 = new base();
	base b2 = *b1; // calls any copy constructor, else calls the default copy constructor (bit copy)
	base b3;
	b3 = b2; // calls the assignment operator

	delete b1;
	*/

//	example* e1 = new e1(100.00);
	return 0;
}
/*
#include<stdio.h>
extern int var;
extern int foo();

void main()
{
	printf("value of var from foo: %d\n", foo());
	printf("accessing var directly:%d\n ", var);
	getchar();
	}*/