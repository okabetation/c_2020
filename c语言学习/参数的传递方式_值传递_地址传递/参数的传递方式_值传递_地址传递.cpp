#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//值传递时 形参无法修改实参
void mySawp01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("*num1 =%d\n", num1);
	printf("*num2 =%d\n", num2);
}
//地址传递时，形参可以修饰实参
void mySawp02(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("*p1 =%d\n", *p1);
	printf("*p2 =%d\n", *p2);
}
int main() {
	int a = 10;
	int b = 20;
	mySawp01(a, b);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	mySawp02(&a, &b);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	system("pause");
	return EXIT_SUCCESS;
}
