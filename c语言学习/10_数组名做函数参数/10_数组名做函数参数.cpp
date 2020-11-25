#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//当数组名做函数参数传递时，会被退化为一个指针，指向数组中的第一个元素的地址
void printfArray(int * arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	//printf("printArray-sizeof arr=%d\n", sizeof(arr));

}

void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);

	printfArray(arr, len);
	printf("sizeof arr=%d\n", sizeof(arr));
}

void scanfArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

void test02()
{
	int arr[5] = { 0 };//设置5个值为0的元素
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int));

	int len = sizeof(arr) / sizeof(int);
	scanfArray(arr, len);
	printf("结果为\n");
	printfArray(arr, len);

}
int getMax(int arr[], int len)
{
	int max = 0;//认定第一个元素为最大值，记录下标为max
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}
	return arr[max];
}

void test03()
{
	int arr[5] = { 0 };//设置5个值为0的元素
	int len = sizeof(arr) / sizeof(int);
	printf("请给数组赋值");
	scanfArray(arr, len);
	printf("结果为\n");
	printfArray(arr, len);

	//获取数值中的最大值
	int max = getMax(arr,len);
	printf("最大值为:%d\n", max);
}
int main() {
	test03();

	system("pause");
	return EXIT_SUCCESS;
}