#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int k;
	scanf("%d", &k);//输入元素值

	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left <= right)
	{
		int mid = (left + right) / 2;//二分查找法

		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到了");

	return 0;
}
