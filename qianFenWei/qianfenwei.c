#include <stdio.h>

int main()
{
    long long int num;
    scanf("%lld", &num);
    int arr[1001] = {0};
    int len = 0;
    int i = 0;
    // 将划分后的各个位置上的数字放到数组中
    while (num % 1000) {
        arr[i] = num % 1000;
        num = num / 1000;
        i++;  // 调整数组下标位置
        len ++;  // 记录数组长度，方便后面循环反向输出数组的值
    }
    // 反向输出对应位置的数字，并输出逗号，实现千分位方式输出数字
    for (i = len-1; i > 0; i--) {
        printf("%d,", arr[i]);
    }
    // printf("\ni:%d, len:%d", i, len);
    printf("%d", arr[i]); // 输出数组中第一个元素的值，为了避免输出最后的逗号，所以放到for循环外
    return 0;
}
