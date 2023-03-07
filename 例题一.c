#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//将三个数值，按从大到小的顺序排列
	/*int a, b, c;

	scanf("%d%d%d", &a, &b, &c);


	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}

	printf("%d %d %d", a, b, c);*/



	//找出1-100所有3的倍数值
	/*int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}*/



	//求两个数的最大公约数
	/*int m, n, r;
	scanf("%d%d", &m, &n);


	while (r = m % n)
	{
		m = n;
		n = r;
	}
	printf("最大公约数是：%d", n);*/

	
	//求公元2000-3000之间的闰年

	/*int year = 0;
	int count = 0;

	for (year = 2000; year <= 3000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount = %d\n", count);*/


	//求100-200之间的素数

	//遍历试除法
	/*int i = 0;
	int j = 0;

	for (i = 100; i <= 199; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			printf("%d\n", i);
	}*/


	//优化后
	int i = 0;
	int j = 0;

	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
	
			printf("%d\n", i);

	}
	return 0;
}
