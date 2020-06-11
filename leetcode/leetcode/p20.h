#include <string>
#include <vector>
#include <unordered_map>
using std::string;
using std::vector;
using std::unordered_map;

class Solution_20
{
private:
	unordered_map<char, int> cmap;
public:
	bool isValid(string s)
	{
		cmap['{'] = 1;
		cmap['}'] = 2;
		cmap['('] = 3;
		cmap[')'] = 4;
		cmap['['] = 5;
		cmap[']'] = 6;
		int value;
		vector<char> left;
		if (s.size() == 0)
			return true;
		for (unsigned int i = 0; i < s.length(); ++i)
		{
			value = cmap[s[i]];
			if (value % 2)
				left.push_back(s[i]);
			else
			{
				if (left.size() != 0 && cmap[left.back()] == value - 1)
					left.pop_back();
				else
					return false;
			}
		}
		if (left.size() == 0)
			return true;
		else
			return false;
	}
};