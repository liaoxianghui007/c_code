﻿#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

/*
（1）在修饰变量的时候，static 修饰的静态局部变量只执行初始化一次，
     而且延长了局部变量的生命周期，直到程序运行结束以后才释放。
（2）static 修饰全局变量的时候，这个全局变量只能在本文件中访问，
     不能在其它文件中访问，即便是 extern 外部声明也不可以。
（3）static 修饰一个函数，则这个函数的只能在本文件中调用，不能被其他文件调用。
     static 修饰的变量存放在全局数据区的静态变量区，包括全局静态变量和局部静态变量，
	 都在全局数据区分配内存。初始化的时候自动初始化为 0。
（4）不想被释放的时候，可以使用static修饰。比如修饰函数中存放在栈空间的数组。
     如果不想让这个数组在函数调用结束释放可以使用 static 修饰。
（5）考虑到数据安全性（当程序想要使用全局变量的时候应该先考虑使用 static）。
*/


int sum(a)
{
	int c = 0;
	static int b = 3;//此处static修饰符延长了变量b的生命周期
	c += 1;
	b += 2;
	return(a + b + c);
}

int main()
{
	int i = 0;
	int a = 2;

	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
	return 0;
}
