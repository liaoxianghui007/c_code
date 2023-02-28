#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>



int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入你的密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == 不能用比较字符串，应该使用库函数strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("错误3次，退出程序！");

	return 0;
}
