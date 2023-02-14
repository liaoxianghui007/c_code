#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		if (i == 5)
			//continue--当表达式为真，跳过当次循环
			continue;
		    printf(" %d", i);

	    if (i == 9)
			//break--当表达式为真时，跳出循环体
			break;
	}


	return 0;
}