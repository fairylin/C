#include <stdio.h>

void swap(int *a, int *b)
{
	// printf("a, b: %d %d\n", a, b);  // 输出的是传入的实参值（即地址信息）
	// printf("*a, *b: %d %d\n", *a, *b);  // *a *b 标识取出指定地址中的内容
	// 传入两个地址，交换两个地址空间中存放的值
	int temp = *a;  // temp中存储地址a中存放的值		此处的*a 就像当于，平时定义的常量int a;
	*a = *b;		// 取出地址b中存储的值，并放入到a值中
	*b = temp;		// 将临时变量temp中的值复制给b。
}

void selectSort(int arr[], int len)
{
	int i, j;
	// 取第一个值，分别和后面的每一个值进行对比，找到最小值，替换两个地址的值 - 循环
	for (i = 0; i < len; i++){
		int min = i;
		for (j = i+1;j<len;j++){
			// 循环一轮，找到值最小的下标，替换为min值，然后交换min和i对应的数组值
			if (arr[j] < arr[min]){
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);
	}
	// printf("***********************************\n");
	for(int k = 0;k < len;k++){
		printf("%d ", arr[k]);
	}
}

int main()
{
	int arr[10] = { 34, 23, 345, 67, 93, 1984, 32, 504, 654, 604 };
	int len = sizeof(arr)/sizeof(arr[0]);
	selectSort(arr, len);
}
