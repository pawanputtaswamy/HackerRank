#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class sortStrings{
public:

	vector<string> sortStringArr(vector<string> st)
	{
		sort(st.begin(), st.end());
		return st;
	}

	vector<string> StringArrayToVector(string arr[], int size)
	{
		vector<string> sVector;
		sVector.assign(arr, arr + size);
		return sVector;
	}
};