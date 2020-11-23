#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1步长不同 +1之后的跳跃字节不同
void test1() {
	char * p1 = NULL;
	printf("%d\n", p1);
	printf("%d\n", p1+1);

	int * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2+1);

	double * p3 = NULL;
	printf("%d\n", p3);
	printf("%d\n", p3+1);

}

//2引用时，取出的字节不同
void test2() {
	int num = 0x01020304;

	int *p = &num;
	printf("%#x\n", *p);

	short *p2 = &num;
	printf("%#x\n", *p2);

	char *p3 = &num;
	printf("%#x\n", *p3);

}
int main() {

	test1();
	test2();
	system("pause");
	return EXIT_SUCCESS;
}