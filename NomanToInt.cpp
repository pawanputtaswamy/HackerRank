#include <iostream>
using namespace std;

class RomanToInt
{
	string romanStr;

	int getIntForRoman(char romanChar)
	{
		int intValue = 0;
		switch (romanChar)
		{
		case 'M':
			intValue = 1000;
			return intValue;
		case 'D':
			intValue = 500;
			return intValue;
		case 'C':
			intValue = 100;
			return intValue;
		case 'L':
			intValue = 50;
			return intValue;
		case 'X':
			intValue = 10;
			return intValue;
		case 'V':
			intValue = 5;
			return intValue;
		case 'I':
			intValue = 1;
			return intValue;
		default:
			return 0;
		}
	}

public:
	RomanToInt(string roman)
	{
		romanStr = roman;
	}

	int ConvertRomanToInt()
	{
		int IntValOfRoman = 0;
		for (int i = romanStr.length()-1; i >= 0; i--)
		{
			int nextVal = getIntForRoman(romanStr[i]);
			int prevVal = (i>0) ? getIntForRoman(romanStr[i - 1]) : nextVal;
				
			if (nextVal > prevVal)
			{
				IntValOfRoman = IntValOfRoman + (nextVal - prevVal);
				i--;
			}
			else
			{
				IntValOfRoman = IntValOfRoman + nextVal;
			}
		}
		return IntValOfRoman;
	}
};
/*
int main()
{
	RomanToInt* romint = new RomanToInt("CCXI");
	int Result = romint->ConvertRomanToInt();
	cout << Result;

	int xx;
	cin >> xx;
	}*/