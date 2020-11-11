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
