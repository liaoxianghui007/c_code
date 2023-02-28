#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	//编写代码，演示多个字符从两端移动，向中间汇聚
	char arr1[] = "hello world !!!!!!";
	char arr2[] = "##################";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		//休息一秒
		Sleep(1000);

		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}
