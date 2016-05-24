using namespace std;
#include <iostream>
#include <string>
#include <algorithm>
#include "reverseString.h"

class isAnagram
{
private:
	
	char *str;
	char *compStr;

public:
	
	isAnagram(char *s, char* comp)
	{
		str = s;
		compStr = comp;
	}

	bool checkAnagram()
	{
		string str1(str);
		string str2(compStr);

		std::sort(str1.begin(), str1.end());
		std::sort(str2.begin(), str2.end());
		return str1 == str2;
	}
};
/*
int main()
{
	char str1[] = "anagram";
	char str2[] = "argaanm";
	
	isAnagram* isAna = new isAnagram(str1, str2);

	if (isAna->checkAnagram())
	{
		cout << "Anagram";
	}
	else
	{
		cout << "Not an Anagram";
	}

	int xx;
	cin >> xx;
	return 0;
}
*/