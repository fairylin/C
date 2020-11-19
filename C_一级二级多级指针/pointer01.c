#include <stdio.h>

int main()
{
	// 每一层* 就相当于开一次锁，逐层深入进行开门，取出对应地址的值
	int a = 10;
	int *p1 = NULL;
	int **p2 = NULL;

	// 直接修改方式
	a = 20;
	printf("a: %d\n", a);
	// 一级间接修改
	p1 = &a;
	*p1 = 30;
	printf("a: %d\n", a);
	// 二级间接修改
	p2 = &p1;
	**p2 = 40;
	printf("a: %d\n", a);
	return 0;
}
