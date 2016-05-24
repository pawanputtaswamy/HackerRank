using namespace std;
#include <iostream>
#include <vector>
#include <sstream>

void reverse(char *begin, char *end)
{
	char temp;
	while (begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

/*Function to reverse words*/
void reverseWords(char *s)
{
	char *word_begin = s;
	char *temp = s; /* temp is for word boundry */

	/*STEP 1 of the above algorithm */
	while (*temp)
	{
		temp++;
		if (*temp == '\0')
		{
			reverse(word_begin, temp - 1);
		}
		else if (*temp == ' ')
		{
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	} /* End of while */

	/*STEP 2 of the above algorithm */
	reverse(s, temp - 1);
}

vector<string> &split(const string &s, char delim, vector<string> &elems) {
	stringstream ss(s);
	string item;
	while (getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

/*
int main()
{
	char s[] = "i like this program very much";
	char *temp = s;
	reverseWords(s);
	printf("%s", s);

	// Reverse with string split
	vector<string> elements;
	string ss = "i like this program very much";
	split(ss, ' ', elements);

	string res;
	for (int i = elements.size()-1; i >= 0; i--)
	{
		res.append(elements.at(i));

		if (i != 0){ res.append(" "); }
	}
	getchar();
	return 0;
	}
	*/