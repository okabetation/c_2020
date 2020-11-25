#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01() {
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	
	int  * arr[4] = { &num1, &num2, &num3, &num4 };

	int len = sizeof(arr) / sizeof(int *);
	printf("%d/%d/%d\n", sizeof(arr), sizeof(int *), sizeof(int));
	//C语言会自动在在双引号""括起来的内容的末尾补上"\0"代表结束，ASCII中的0号位也占用一个字符。
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *arr[i]);
	}

}

void test02() {
	char * arr[4] = { "arr","bbb","ccc","ddd" };

	int len = sizeof(arr) / sizeof(char *);
	printf("%d/%d/%d\n", sizeof(arr), sizeof(char *), sizeof(char));
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", arr[i]);
	}

}
int main() {
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}