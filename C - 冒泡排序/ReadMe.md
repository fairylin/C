### 题目
冒泡排序

#### 实现思路

冒泡排序
冒泡排序（英语：Bubble Sort）是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序（如从大到小、首字母从A到Z）错误就把他们交换过来。

1. 原理梳理：两两比较，每次都识别出数组中最大的原则在最后一个【这里面最大和最小，一斤在行收或者行末都是可以调整的】
2. 由于每一轮j比较完成，数组中最大的数，已经在数组的最后一个元素了，所以在第二轮比较时，减去i是为了减少比较的次数，降低复杂度
3. 最后输出调整后的数组结构

注：其中我们可以在每一次比较完成，或者每一轮j比较完成输出数组详情，查看比较的原理！

```C
/*冒泡排序 bubbleSort.c*/
#include <stdio.h>
#include <time.h>

int bubbleSort(int *arr, int len){
  	for(int i= 0;i<len-1;i++){
    	for(int j=0;j<len-1-i;j++){
      		if(arr[j] > arr[j+1]){
		        int temp = arr[j];
		        arr[j] = arr[j+1];
		        arr[j+1] = temp;
      		}
	  	/*查看调整排序过程*/
	  	// for(int i = 0;i<=len-1;i++){
	   	//  	printf("%d ", arr[i]);
	  	// }
	  	// printf("\n");
    	}
  	}
}

int bubbleSort02(int *arr, int len){
  	for(int i= 0;i<len-1;i++){
    	for(int j=0;j<len-1;j++){  // 不进行-i操作，仍全量比较(减去i，是因为每轮比较完成后，最大的数已经在数组的最后一个，下一轮就不需要和那个进行比较了，所以减去i)
      		if(arr[j] > arr[j+1]){
		        int temp = arr[j];
		        arr[j] = arr[j+1];
		        arr[j+1] = temp;
      		}
	  	/*查看调整排序过程*/
	  	// for(int i = 0;i<=len-1;i++){
	   	//  	printf("%d ", arr[i]);
	  	// }
	  	// printf("\n");
    	}
  	}
}

int main()
{
  	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70,25, 30, 100 };
  	int len = sizeof(arr)/sizeof(arr[0]);
  	/*输出排序前的数组*/
  	// for(int i = 0;i<=len-1;i++){
    //  	printf("%d ", arr[i]);
  	// }
  	clock_t start01 = clock();
  	bubbleSort(arr, len);
  	clock_t finish01 = clock();
  	printf("%fS.\n", (finish01-start01)/CLOCKS_PER_SEC);
  	
  	// 输出排序后数组
  	for(int i = 0;i<=len-1;i++){
    	printf("%d ", arr[i]);
  	}
  	return 0;
}
```

PS: C语言实现冒泡排序，其中的i意义理解！
