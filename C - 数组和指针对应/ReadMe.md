### 题目
数组和指针 + 普通变量和指针

#### 解析
1. & 符号在变量前或者是数组元素前用来去除对应变量的实际地址， 如：&a, &arr[0];
2. \* 用来解析地址，获取对应地址中保存的变量值； 
```C
如：int a = 12;
	int *b;
	b = &a;
	printf("a: %d\n", a);  	// 12
	printf("b: %d\n", b);	// 6422024
	printf("*b: %d\n", *b);	// 12
```


```C
#include <stdio.h>

int check(int *arr)
{
	// 此处接收到的实参为数组a中下标为2的元素实际地址
	printf("check --- arr: %d\n", arr); 	// 输出传递进来的地址
	printf("check --- *arr: %d\n", *arr);	// 取地址对应的值，并输出
}

int main()
{
	// 普通变量进行指针学习
	int a, c;  	// 定义变量a 和 c
	a = 12; 	// 对变量a赋值为12；
	int *d;		// 定义指针变量 d
	d = &a;		// 取变量a的地址 并 赋值给指针变量d
	printf("d: %d\n", d);	// 输出变量d的值（即变量a的地址）
	c = *d;			// 取出指针变量d 对应地址中的值，赋值给变量c
	printf("c: %d\n", c);	// 输出c的值
	printf("**************************\n");
	int arr[] = {1, 2, 3, 4, 5, 6};		// 定义数组变量a
	int *b;					// 定义指针变量b
	b = &arr[2];				// 取数组中下标为2的元素地址，并赋值给b
	printf("arr[1]: %d\n", arr[1]);		// 输出数组元素值
	printf("b: %d\n", b);			// 输出指针变量 b （即数组元素中下标为2的元素所在地址）
	printf("&arr[1]: %d\n", &arr[1]);	// 取数组中下为1的地址，并输出
	printf("*b: %d\n", *b);			// 取指针元素b中存放的地址对应的值，并输出
	check(&arr[2]);				// 将数组中下标为2的元素地址作为参数，传递给函数check
	printf("**************************\n");
	int x = 12;
	int *y;
	y = &x;
	printf("x: %d\n", x);
	printf("&x: %d\n", &x);
	printf("y: %d\n", y);
	printf("&y: %d\n", &y);
	printf("*y: %d\n", *y);
}


d: 6422020
c: 12
**************************arr[1]: 2
b: 6421992
&arr[1]: 6421988
*b: 3
check --- arr: 6421992
check --- *arr: 3
**************************x: 12
&x: 6421980
y: 6421980
&y: 6421968
*y: 12
```

PS: 普通指针与数组指针学习01，简单了解！
