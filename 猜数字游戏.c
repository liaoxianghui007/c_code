#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

//RAND_MAX  0-32767

void game()
{
	//生成随机数
	int ret = 0;
	ret = rand() % 100 + 1;

	//输入数值
	int guess = 0;
	
	//猜数字
	while (1)
	{
		printf("请输入数字：\n");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("小样，你猜小了\n\n");
		}
		else if (ret < guess)
		{
			printf("大哥，你猜大了\n\n");
		}
		else
		{
			printf("厉害厉害，你猜对了\n\n");
			break;
		}
	}
}


void menu()
{
	printf("**********************************\n");
	printf("******1.play    0.exit************\n");
	printf("**********************************\n");
}


int main()
{
	int input = 0;

	//时间戳来设置随机数的起始点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);

		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新选择\n");
				break;
		}

	} while (input);

	return 0;
}
