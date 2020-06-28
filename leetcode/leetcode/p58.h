#ifndef P58_H_
#define P58_H_

#include <string>
using std::string;

class Solution_58
{
public:
	int lengthOfLastWord(string s)
	{
		if (s.length() == 0)
			return 0;
		int count = 0;
		for (int i = s.length() - 1; i >= 0; --i)
		{
			if (s[i] == ' ')
			{
				if (count == 0)
					continue;
				else
					break;
			}
			else
				++count;
		}
		return count;
	}
};

#endif