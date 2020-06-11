#include <iostream>
#include "p7.h"
#include "p9.h"
#include "p13.h"
#include "p14.h"
#include "p20.h"

void test_p7()
{
	Solution_7 S;
	int x = -3450;
	printf("test_p7:\n");
	printf("%d对应的输出结果是%d\n", x, S.reverse(x));
}

void test_p9()
{
	Solution_9 S;
	int x = 12321;
	printf("test_p9:\n");
	printf("Is %d Palindrome?\n", x);
	std::cout << std::boolalpha << S.IsPalindrome(x) << std::endl;
}

void test_p13()
{
	Solution_13 S;
	string mystr = "MCMXCIV"; // string头文件在p13.h中包含
	printf("test_p13:\n");
	std::cout << mystr << " 对应的数字是 " << S.romanToInt(mystr) << std::endl;
}

void test_p14()
{
	Solution_14 S;
	vector<string> strs;
	strs.push_back("leetcode");
	strs.push_back("leets");
	printf("test_p14:\n");
	std::cout << S.longestCommonPrefix(strs) << std::endl;
}

void test_p20()
{
	Solution_20 S;
	string s = ")";
	printf("test_p20:\n");
	std::cout << std::boolalpha << S.isValid(s) << std::endl;
}

int main()
{
	test_p7();
	test_p9();
	test_p13();
	test_p14();
	test_p20();
	return 0;
}