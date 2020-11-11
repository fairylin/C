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
