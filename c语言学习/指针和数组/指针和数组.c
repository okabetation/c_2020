#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01() {
	int arr[5] = { 10,20,30,40,50 };
	
	int * p = arr;	
	printf("%d\n", *p++);		//1 先*p 再p++	首先解引用取值 再将指针自增
	printf("%d\n", (*p)++);	//2	先*p 再*p++	首先解引用取值 再讲指针指向的值自增
	printf("%d\n", *(p++));	//3	先*p 再p++	首先解引用取值   再将指针则增

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);	//
	}
}
void test02() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", *(arr + arr[1]));	//3	 下标为1的数字2元素加上arr的首地址1 最后取值往后一位，为3
	printf("%d\n", *(arr));				//1	取首地址
	printf("%d\n", (arr));				//123 地址
	printf("%d\n", *arr);				//1
	printf("%d\n", &(arr[1]));			//127 地址 下标为1的首地址 加四个字节
	printf("%d\n", (arr[1]));			//2 输出下标为1的元素
}
int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}