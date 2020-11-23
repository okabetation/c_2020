#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//const修饰*p 常量指针
void test1() {
	int a = 10;
	const int * p = &a;
	printf("%d", *p);

	//*p = 20; //error *p 只读 指针指向的值不可以修改
	int b = 100;
	p = &b;		//指针的指向可以修改
	printf("%d", *p);
}
//const修饰p 指针常量
void test2() {
	int a = 10;
	int * const p = &a;

	*p = 20;			//指针指向的值可以修改
	printf("%d,%d\n", *p,&p); 
	int b = 100;

	//; //指针的指向不可以修改
}

//const修饰p和* 只读

void test3() {
	int a = 10;
	const int * const p = &a;

	//*p = 20;			
	//p = &b;
}
int main() {

	//test1();
	test2();

	system("pause");
	return EXIT_SUCCESS;
}