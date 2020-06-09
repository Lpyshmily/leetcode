#include <iostream>
#include "p7.h"
#include "p9.h"
#include "p13.h"

void test_p7()
{
	Solution_7 S;
	int x = -3450;
	printf("test_p7:\n");
	printf("%d��Ӧ����������%d\n", x, S.reverse(x));
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
	string mystr = "MCMXCIV"; // stringͷ�ļ���p13.h�а���
	printf("test_p13:\n");
	std::cout << mystr << " ��Ӧ�������� " << S.romanToInt(mystr) << std::endl;
}

int main()
{
	test_p7();
	test_p9();
	test_p13();
	return 0;
}