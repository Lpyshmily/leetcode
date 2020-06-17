#ifndef P28_H_
#define P28_H_

#include <string>
using std::string;

class Solution_28
{
public:
	int strStr(string haystack, string needle)
	{
		int l1 = haystack.length();
		int l2 = needle.length();
		for (int i = 0; i < l1 - l2 + 1; ++i)
		{
			if (haystack.substr(i, l2) == needle)
				return i;
		}
		return -1;
	}
};

#endif