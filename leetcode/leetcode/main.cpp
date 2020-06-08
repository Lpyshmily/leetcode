#include <iostream>
#include "p7.h"

void test_p7()
{
	Solution_7 S;
	int x = -3450;
	printf("test_p7:\n");
	printf("%d对应的输出结果是%d\n", x, S.reverse(x));
}

int main()
{
	test_p7();
	return 0;
}