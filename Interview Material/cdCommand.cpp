using namespace std;

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <sstream>

class cdCommand
{
private:
	string input;
public:
	
	cdCommand(string str)
	{
		input = str;
	}

	vector<string> &split(const string &s, char delim, vector<string> &elems) {
		stringstream ss(s);
		string item;
		while (getline(ss, item, delim)) {
			elems.push_back(item);
		}
		return elems;
	}

	string getPath()
	{
		stack<string> stack;
		string res;
		vector <string> elements;
		split(input, '/', elements);
		int len = elements.size();
		for (int i = 0; i < len;i++)
		{
			if (elements.at(i) != "..")
			{
				stack.push(elements.at(i));
			}
			else
			{ 
				stack.pop();
			}
		}
		while (!stack.empty())
		{
			res = "/" + res;
			res = stack.top() + res ;
			stack.pop();
		}
		return res;
	}
};
/*
int main()
{
	string str = "c/../d/../e/f/g/../h/..";

	cdCommand* cdC = new cdCommand(str);
	cout << cdC->getPath();

	return 0;
}
*/