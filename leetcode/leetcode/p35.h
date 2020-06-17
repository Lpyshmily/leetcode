#ifndef P35_H_
#define P35_H_

#include <vector>
using std::vector;

class Solution_35
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		int len = nums.size();
		for (int i = 0; i < len; ++i)
		{
			if (nums[i] >= target)
				return i;
		}
		
		return len;
	}
};

#endif