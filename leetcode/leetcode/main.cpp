#include <iostream>
#include "p7.h"
#include "p9.h"
#include "p13.h"
#include "p14.h"
#include "p20.h"
#include "p28.h"
#include "p38.h"
#include "p53.h"

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

void test_p28()
{
	Solution_28 S;
	string str1 = "aaaaa";
	string str2 = "bba";
	printf("test_p28:\n");
	std::cout << S.strStr(str1, str2) << std::endl;
}

void test_p38()
{
	Solution_38 S;
	printf("test_p38:\n");
	for (int i = 1; i <= 10; ++i)
		std::cout << S.countAndSay(i) << std::endl;
}

void test_p53()
{
	Solution_53 S;
	printf("test_p53:\n");
	int a[9] = {4, -5, 10, -1, 2, 3, -2, -1, 5};
	vector<int> v(a, a+9);
	std::cout << S.maxSubArray(v) << std::endl;
}

int main()
{
	test_p7();
	test_p9();
	test_p13();
	test_p14();
	test_p20();
	test_p28();
	test_p38();
	test_p53();
	return 0;
}