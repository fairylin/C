#include <stdio.h>
#define MAX 100000
/**
大数阶乘
Given an integer N(0 ≤ N ≤ 10000), your task is to calculate N!.
**/

int main()
{
	int numN = 0;
	while (scanf("%d", &numN) != EOF) {
		// scanf("%d", &numN);
		int array[MAX] = {0}; // 定义存放结果中各个位置的值
		array[1] = 1;
		int point = 1; // 定义位数
		int carry = 0; // 定义进位数
		int j = 0; // 定义 数组中开始乘法计算的位数

		for (int i = 2; i <= numN; i++) // 计算传入数字numN的阶乘
		{
			for(j = 1;j <= point; j++)
			{
				int temp = array[j] * i + carry; // 依次使用存放结果的数组array各个位置上的值，与需要统计的阶乘值i进行乘法计算
				carry = temp / 10;    // 进位数 和 当前位置数的关系是10倍（10进制情况下）
				array[j] = temp % 10;  // 计算当前位置的数值
			}
			while(carry)
			{
				// 1.上一步循环中已经计算到了原有数组的长度
				// 2.如果carry不为空，证明最后一位赋值后，仍存在进位，需要继续增加数组长度，维护进位值
				// 3.按照原有原则进行进位数的维护，当前位置为carry%10， 进位数为carry/10;
				array[j] = carry % 10;
				carry = carry / 10;
				j++;
			}
			// 上一步循环完成后，最后j仍然进行了一步 自增操作，实际数组的位数为j-1 故，point = j-1
			point = j - 1;
		}
		for (int i = point; i >= 1; i--)
		{
			printf("%d", array[i]);
		}
		printf("\n");
	}
}
