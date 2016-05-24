using namespace std;

#include <iostream>
#include <vector>
#include "sortStrings.h"

/*
int main()
{
	string str1[] = { "alpha", "gamma", "beta", "delta", "chi" };
	
	sortStrings* s = new sortStrings();	
	vector<string> str = s->StringArrayToVector(str1, sizeof(str1) / sizeof(str1[0]));
	vector<string> op = s->sortStringArr(str);

	for (vector<string>::iterator i = op.begin(); i != op.end(); ++i)
	{
		cout << *i << endl;
	}
	return 0;
}
*/
/*template <class T>
struct sum{
	static void foo(T op1, T op2)
	{
		cout << op1 << op2;
	}
};

int main()
{
	sum<int>::foo(1, 3);
	return 0;
}*/

class Alpha
{
	int x;
public:
	Alpha(){}
	Alpha(int i)
	{
		x = i;
	}
};

class beeta : public Alpha
{
	int u;
	Alpha aa;
public:
	beeta(int a)
	{
		u = a;
	}
};