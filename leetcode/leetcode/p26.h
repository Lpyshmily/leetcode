#ifndef P26_H_
#define P26_H_

#include <vector>
using std::vector;

class Solution_26
{
public:
    int removeDuplicates(vector<int>& nums)
	{
        if (nums.size() == 0)
			return 0;
		int i = 0;
		for (int j = 0; j < nums.size(); ++j)
		{
			if (nums[i] != nums[j])
			{
				++i;
				nums[i] = nums[j];
			}
		}
		return i+1;
    }
};

#endif