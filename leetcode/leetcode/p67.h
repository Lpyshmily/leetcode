#ifndef P67_H_
#define P67_H_

#include <string>
#include <algorithm>
using std::string;
using std::reverse;
using std::max;

class Solution_67
{
public:
	string addBinary(string a, string b)
	{
		string ans;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		unsigned int n = max(a.size(), b.size());
		int carry = 0;
		for (unsigned int i = 0; i < n; ++i)
		{
			carry += (i < a.size() ? (a[i] == '1') : 0);
			carry += (i < b.size() ? (b[i] == '1') : 0);
			ans.push_back((carry % 2) ? '1' : '0'); // 余数保留到本位
			carry /= 2; // 进位
		}

		if (carry)
			ans.push_back('1');
		reverse(ans.begin(), ans.end());

		return ans;
	}
};

#endif