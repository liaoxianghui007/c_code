#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//函数的传址调用
int Max(int x,int y)
{
	int z = x * y;
	return z;
}


int main()
{

	int a = 20;
	int b = 50;

	int result = Max(a,b);
	printf("result = %d\n", result);

	return 0;
}