#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}


int main()
{
	//打印100-200之间的质数
	int i = 0;
	for ( i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		printf("%d\n", i);
	}

	return 0;
}