#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		if (i == 5)
			//continue--�����ʽΪ�棬��������ѭ��
			continue;
		    printf(" %d", i);

	    if (i == 9)
			//break--�����ʽΪ��ʱ������ѭ����
			break;
	}


	return 0;
}