using namespace std;

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int listAnagram()
{
	string input[] = {"cat", "odg" ,"tac", "dog" ,"atc", "abc"};
	
	int len = sizeof(input) / sizeof(input[0]);
	vector<string> ip (input,input+len);

	map<string, vector<int>> strmap;
	int count = 0;
	for (vector<string>::iterator i = ip.begin(); i < ip.end(); i++)
	{
		sort((*i).begin(),(*i).end());
		
		map<string, vector<int> > ::iterator vi = strmap.find(*i);
		if (vi == strmap.end())
		{
			vector<int> ct;
			ct.push_back(count);
			strmap[*i] = ct;
		}
		else
		{
			vector<int> ct = vi->second;
			ct.push_back(count);
			strmap[*i] = ct;
		}

		count++;
	}

	vector<string> finalList;

	for (map<string, vector<int>>::iterator it = strmap.begin(); it != strmap.end(); it++)
	{
		//vector<int> fList = it->second;
		if (it->second.size() > 1)
		{
			for (vector<int>::iterator itr = it->second.begin(); itr != it->second.end(); itr++)
			{
				finalList.push_back(input[*itr]);
			}
		}
	}
	
	return 0;
}

/*
     -------------
	|act |{0,2,4} | 
	|dog |{1,5}   |
	---------------

*/