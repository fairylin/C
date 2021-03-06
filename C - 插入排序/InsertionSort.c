/**插入排序
插入排序（英语：Insertion Sort）是一种简单直观的排序算法。
它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
插入排序在实现上，通常采用in-place排序
（即只需用到 {\displaystyle O(1)} {\displaystyle O(1)}的额外空间的排序），
因而在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位，为最新元素提供插入空间。
*/
#include <stdio.h>

int insertionSort(int arr[], int len)
{
	int i, j, temp;
	for(i = 1; i<len; i++){ 					// 从第二位元素进行比较（向前比较）
		printf("%d ", arr[i]);
		temp = arr[i];							// 将当前需要拿去比较的值，保存到临时变量中
		for(j = i;j>0 && arr[j-1] > temp;j--){	// 将当前数组下标赋值给j，从当前下标开始向前两两比较（此处我们想让数组从小到大排列，故使用a[j-1]>temp）
			arr[j] = arr[j-1];					// 如果当前元素小于前一个元素，则交换位置，循环指导第一个和第二个元素对比,,相当于将每一个大于当前指的数向后移动一位
			// 如果符合条件，将上一个元素的值赋值到当前位置上
		}
		arr[j] = temp;							// 将最开始参与比较的数arr[i]保存到临时变量中的值temp，赋值给数组中的前面一个下标对应的元素
	}
												// 循环完成，即完成了数组的插入排序
	printf("sort Over!\n");
	int k = 0;
	for(k = 0; k < len-1; k++){
		printf("%d ", arr[k]);
	}
	printf("%d\n", arr[k]);
}

int main()
{
	int arr[10] = { 2323, 32, 483, 1939, 231, 95, 103, 9, 6, 23 };
	int len = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, len);
	return 0;
}
