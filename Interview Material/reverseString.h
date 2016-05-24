using namespace std;

#include <iostream>

class reverseString
{
private:
	char* getStr;

	void swap(char *a, char* b)
	{
		char temp = *a;
		*a = *b;
		*b = temp;
	}

public:
	reverseString(char* ip)
	{
		getStr = ip;
	}

	void reverse()
	{
		int len = strlen(getStr);
		for (int i = 0; i < len / 2; i++)
		{
			swap(&getStr[i], &getStr[len - i - 1]);
		}
	}
};