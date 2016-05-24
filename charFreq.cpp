#include <iostream>
using namespace std;

/*
Remove Space from a string
Input:  "g  eeks   for ge  eeks  "
Output: "geeksforgeeks"
*/
class charfreq
{
public:
	charfreq()
	{}
	char* getFrequency(char* stringVal)
	{
		char* sw = stringVal;
		char op[26] = {NULL};
		int  count[26] = { 0 };
		int j = 0;
		for (int i = 0; i <= strlen(sw); i++)
		{
			count[tolower(sw[i]) - 'a']++;
			if (count[tolower(sw[i]) - 'a'] > 1)
			{
				op[j] = sw[i];
				j++;
			}
		}
		return op;
	}
};

/*
int main()
{
	charfreq r;
	char text[] = "geeksfogeeks";
	char* finalString = r.getFrequency(text);
	cout << finalString[0];
}
*/