#include <string>
#include <vector>
using std::string;
using std::vector;

class Solution_14
{
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.size() == 0)
			return "";
		for (unsigned int i = 0; i < strs[0].length(); ++i)
		{
			char c = strs[0][i];
			for (unsigned int j = 1; j < strs.size(); ++j)
			{
				if (i == strs[j].length() || strs[j][i] != c)
					return strs[0].substr(0,i);
			}
		}
		return strs[0];
	}
};