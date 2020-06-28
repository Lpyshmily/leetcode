#ifndef P66_H_
#define P66_H_

#include <vector>
using std::vector;

class Solution_66
{
public:
	vector<int> plusOne(vector<int>& digits)
	{
		for (int i = digits.size() - 1; i >= 0; --i)
		{
			++digits[i];
			if (digits[i] % 10 == 0)
				digits[i] = 0;
			else
				return digits;
		}
		digits.insert(digits.begin(), 1);
		return digits;
	}
};

#endif