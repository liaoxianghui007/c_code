#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
    int day;
    printf("����һ�����֣�");
    scanf("%d", &day);

    if (day == 1)
        printf("����һ\n");
    else if (day == 2)
        printf("���ڶ�\n");
    else if (day == 3)
        printf("������\n");
    else if (day == 4)
        printf("������\n");
    else if (day == 5)
        printf("������\n");
    else if (day == 6)
        printf("������\n");
    else if (day == 7)
        printf("������\n");
    else
        printf("�Ƿ��ַ�\n");

    return 0;
}