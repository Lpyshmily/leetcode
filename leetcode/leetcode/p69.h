#ifndef P69_H_
#define P69_H_

class Solution_69
{
public:
	int mySqrt(int x)
	{
		int l = 0, r = x, ans = -1, mid;
		while (l <= r)
		{
			mid = l + (r - l) / 2;
			if ((long long)mid * mid <= x)
			{
				ans = mid;
				l = mid + 1;
			}
			else
				r = mid - 1;
		}
		return ans;
	}
};

#endif