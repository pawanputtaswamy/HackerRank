using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>


string longestCommonPrefix(vector<string> &strs) {
	if (strs.empty()){ return ""; }
	if (strs.size() == 1){ return strs[0]; }

	for (int i = 0; i<strs[0].size(); i++){
		for (int j = 0; j<strs.size() - 1; j++){
			if (i >= strs[j + 1].size() || strs[j][i] != strs[j + 1][i]){
				return strs[j].substr(0, i);
			}
		}
	}

	return strs[0];
}
/*
int main()
{
	vector<string> stringVec = { "aJohn", "Bob", "John", "Zack", "John" };
	string res = longestCommonPrefix(stringVec);
	return 0;
}
*/