using namespace std;
#include <iostream>
#include <string>

string removeDuplicateLetters(string s) {

	char alpha[26] = { 0 };
	const char* str = s.c_str();
	string res;
	for (int i = 0; i < s.length(); i++)
	{
		alpha[tolower(str[i]) - 'a']++;
	}

	for (int j = 0; j < 26; j++)
	{
		if (alpha[j] != 0)
		{
			int x = j + 97;
			char c = static_cast<char>(x);
			res += c;
		}
	}
	return res;
}
/*
int main()
{
	string str =  removeDuplicateLetters("abcaccd");
	cout << str;
	getchar();
	return 0;
}
*/