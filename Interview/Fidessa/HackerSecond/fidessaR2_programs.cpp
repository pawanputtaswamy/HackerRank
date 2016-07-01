
using namespace std;
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

int findMatchingPair(const string& input) {

	int index = -1;
	stack<char> mystack;
	for (int i = 0; i< input.size(); i++)
	{
		if (isupper(input[i]))
		{
			mystack.push(input[i]);
		}
		else
		{
			if (mystack.empty())
			{
				return index;
			}
			else
			{
				if (input[i] == tolower(mystack.top()))
				{
					index = i;
					mystack.pop();
				}
				else
				{
					return index;
				}

			}
		}
	}
	return index;
}

/*
* Complete the function below.
https://instant.1point3acres.com/thread/174491
arr = {900, 940, 950, 1100, 1500, 1800} 
dep = {910, 1200, 1120, 1130, 1900, 2000}
*/
int findMinGates(vector < int > arrivals, vector < int > departures, int flights) {
	// Sort arrival and departure arrays
	sort(arrivals.begin(), arrivals.end());
	sort(departures.begin(), departures.end());

	// plat_needed indicates number of platforms needed at a time
	int gate_num_required = 1, total_num_gates = 1;
	int i = 1, j = 0;

	// Similar to merge in merge sort to process all events in sorted order
	while (i < flights && j < flights)
	{
		// If next event in sorted order is arrival, increment count of
		// platforms needed
		if (arrivals[i] <= departures[j])
		{
			gate_num_required++;
			i++;
			if (gate_num_required > total_num_gates)  // Update result if needed
				total_num_gates = gate_num_required;
		}
		else // Else decrement count of platforms needed
		{
			gate_num_required--;
			j++;
		}
	}

	return total_num_gates;

}



