#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//打印九九乘法口诀表
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-2d  ", i, j, i * j);
		}
		printf("\n");
	}

	//从10个数中找出最大值
	/*int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	printf("最大值是：%d ", max);*/

	//求 1/1 - 1/2 + 1/3 - 1/4 + 1/5...... + 1/99 - 1/100的结果

	/*int i = 0;
	double sum = 0.0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{ 
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("sum的结果是：%lf", sum);*/


	//1-100内，数一数含9的个数
	/*int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("含9的个数有：%d\n", count);*/
	return 0;
}
