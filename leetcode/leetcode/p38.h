#ifndef P38_H_
#define P38_H_

#include <string>
using std::string;
using std::to_string;

class Solution_38
{
public:
	string countAndSay(int n)
	{
		if (n == 1)
			return "1";

		string previous = countAndSay(n-1);
		string result = "";
		int count = 1;

		for (unsigned int i = 0; i < previous.length(); ++i)
		{
			if (i != previous.length()-1 && previous[i+1] == previous[i])
				++count;
			else
			{
				result += to_string(count) + previous[i];
				count = 1;
			}
		}
		return result;
	}
};

#endif