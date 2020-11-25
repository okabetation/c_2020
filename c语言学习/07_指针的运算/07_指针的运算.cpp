#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void test01() {
	int num[7] = { 1,2,3,4,5,6,7 };
	int * p1 = num;
	int * p2 = &num[4];

	printf("p2 - p1 = %d\n", p2 - p1); //向减，获取元素之间的个数

}

int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}