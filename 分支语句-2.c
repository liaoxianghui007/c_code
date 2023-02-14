#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
    int day;
    printf("输入一个数字：");
    scanf("%d", &day);

    if (day == 1)
        printf("星期一\n");
    else if (day == 2)
        printf("星期二\n");
    else if (day == 3)
        printf("星期三\n");
    else if (day == 4)
        printf("星期四\n");
    else if (day == 5)
        printf("星期五\n");
    else if (day == 6)
        printf("星期六\n");
    else if (day == 7)
        printf("星期天\n");
    else
        printf("非法字符\n");

    return 0;
}