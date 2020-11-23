#define _CRT_SECURE_NO_WARINGS
#include "test.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01() {
	int num1 = 10;
	int num2 = 10;

	int ret = myAdd(num1, num2);
	printf("num1+num2 = %d\n", ret);
}
int main() {
	test01();
	system("pause");
	return EXIT_SUCCESS;
}