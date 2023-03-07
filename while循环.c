#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
			
	}*/
	
	
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);

	//利用while循环，去除多余空格
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认（Y/N)：");
	ret = getchar();

	if (ret == 'Y')
		printf("确认成功");
	else
		printf("放弃确认");
	
	return 0;
}
