#include <stdio.h>

int check(int *a)
{
	// 此处接收到的实参为数组a中下标为2的元素实际地址
	printf("check --- a: %d\n", a); 	// 输出传递进来的地址
	printf("check --- *a: %d\n", *a);	// 取地址对应的值，并输出
}

int main()
{
	// 普通变量进行指针学习
	int a, c;  	// 定义变量a 和 c
	a = 12; 	// 对变量a赋值为12；
	int *b;		// 定义指针变量 b
	b = &a;		// 取变量a的地址 并 赋值给指针变量b
	printf("b: %d\n", b);		// 输出变量b的值（即变量a的地址）
	c = *b;				// 取出指针变量b 对应地址中的值，赋值给变量c
	printf("c: %d\n", c);		// 输出c的值
	int a[] = {1, 2, 3, 4, 5, 6};	// 定义数组变量a
	int *b;				// 定义指针变量b
	b = &a[2];			// 取数组中下标为2的元素地址，并赋值给b
	printf("a[1]: %d\n", a[1]);	// 输出数组元素值
	printf("b: %d\n", b);		// 输出指针变量 b （即数组元素中下标为2的元素所在地址）
	printf("&a[1]: %d\n", &a[1]);	// 取数组中下为1的地址，并输出
	printf("*b: %d\n", *b);		// 取指针元素b中存放的地址对应的值，并输出
	check(&a[2]);			// 将数组中下标为2的元素地址作为参数，传递给函数check
}
