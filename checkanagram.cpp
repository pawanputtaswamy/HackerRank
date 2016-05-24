#include <iostream>
using namespace std;

int find_anagram(string array1, string array2)
{
	int num1[26] = { 0 }, i = 0;

	while (array1[i] != 0)
	{
		num1[tolower(array1[i]) - 'a']++; // example: let array1[i] is 'A' =>  tolower(A) = 'a' => num1[ascii('a') - ascii('a')] => num1[0]++ => num1[0] is count of 'a' 
		i++;
	}
	i = 0;
	while (array2[i] != 0)
	{
		num1[tolower(array2[i]) - 'a']--;
		i++;
	}
	for (i = 0; i < 26; i++)
	{
		if (num1[i] != 0)
			return false;
	}
	return true;
}

/*int main()
{

	string s = "AbCdefjhaaa";
	string d = "aacdfjhaeab";
	if (find_anagram(s, d)){
		cout << "Anagram";
	}
	else{
		cout << "Not an anagram";
	}
	return 0;
}*/