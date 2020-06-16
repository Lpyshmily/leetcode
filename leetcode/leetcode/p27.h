#ifndef P27_H_
#define P27_H_

#include <vector>
using std::vector;

class Solution_27
{
public:
    int removeElement(vector<int>& nums, int val)
	{
        if (nums.size() == 0)
			return 0;
		int i = 0;
		for (int j = 0; j < nums.size(); ++j)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				++i;
			}
		}
		return i;
    }
};

#endif