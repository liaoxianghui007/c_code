#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i = 0;

	//while循环格式
	while (i < 10)
	{
		i++;
		printf(" %d\n", i);

	}

	//for循环格式
	for ( i = 0; i < 10; i++)
	{
		printf(" %d", i);
	}

	return 0;
}
