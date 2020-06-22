#ifndef P53_H_
#define P53_H_

#include <vector>
#include <algorithm>
using std::vector;
using std::max;

class Solution_53
{
public:
	int maxSubArray(vector<int>& nums)
	{
		int pre = 0; // best end with nums[i-1]
		int maxAns = nums[0]; // best max among before nums[i]
		for (unsigned int i = 0; i < nums.size(); ++i)
		{
			pre = max(pre + nums[i], nums[i]);
			maxAns = max(maxAns, pre);
		}
		return maxAns;
	}
};

#endif