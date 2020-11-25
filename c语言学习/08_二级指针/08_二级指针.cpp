#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01() {
	int num = 10;
	int * p = &num;
	int **pp = &p;

	printf("num =%d\n", num);		
	printf("&num =%d\n", &num);		//num的地址152
	printf("--------------------\n");
	printf("p =%d\n", p);	//p的值 num的地址152
	printf("*p =%d\n", *p);	//num的值 10
	printf("&p =%d\n", &p);	//p的地址	153
	printf("--------------------\n");
	printf("pp =%d\n", pp);	//pp的值 pp的地址 153
	printf("*pp =%d\n", *pp);	//p的值 num的地址152
	printf("**pp =%d\n", **pp);	//num的值 10
	printf("&pp =%d\n", &pp);	//pp的地址 154
}
int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}