### 题目

之前实现的程序中，部分场景涉及到一次性需要传入多个参数的情况，
一次一次的传入比较麻烦，所以实现runoob中关于传递数组作为参数给函数的例子进行实践练习；


#### 实现总结
1. 传入形式分别为，指针形式的形参、定义大小的数组、未定义大小的数组
2. 在函数内的数组使用方式和普通场景完全一致；

```C
#include <stdio.h>

/*方式 3
形式参数是一个未定义大小的数组：*/
double getAvg(int arr[], int size)
{
	int i;
	double avg;
	double sum = 0;
	for (i = 0;i<size;i++){
		sum += arr[i];
	}
	avg = sum /size;

	return avg;
}

/*方式 2
形式参数是一个已定义大小的数组：*/
double getAvg02(int arr[5], int size)
{
	int i;
	double avg;
	double sum = 0;
	for (i = 0;i<size;i++){
		sum += arr[i];
	}
	avg = sum /size;

	return avg;
}

/*方式 1
形式参数是一个指针（您可以在下一章中学习到有关指针的知识）：*/
double getAvg03(int *arr, int size)
{
	int i;
	double avg;
	double sum = 0;
	for (i = 0;i<size;i++){
		sum += arr[i];
	}
	avg = sum /size;

	return avg;
}

int main()
{
	/*定义带有几个元素的数组*/
	int balence[5] = {1000, 324, 4763, 23, 494};
	double avg;

	/*传递执行数组的指针给函数*/
	avg = getAvg(balence, 5);

	/*输出返回值*/
	printf("%.2f\n", avg);

	/*传递执行数组的指针给函数*/
	avg = getAvg02(balence, 5);

	/*输出返回值*/
	printf("%.2f\n", avg);

	/*传递执行数组的指针给函数*/
	avg = getAvg03(balence, 5);

	/*输出返回值*/
	printf("%.2f\n", avg);

	return 0;
}
```

PS:runoob 中数组作为函数参数 实践！
