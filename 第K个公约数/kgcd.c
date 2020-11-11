#include <stdio.h>
#define MAX 1000

int maxGCD(int m, int n)
{
	// 求最大公约数
	// 欧几里得方法计算两个数的最大公约数
    if(n == 0)
        return m;
    return maxGCD(n, m % n);
}

int main()
{
	int a, b, k;
	int al[MAX] = {};
	scanf("%d %d %d", &a, &b, &k);
	int num = maxGCD(a, b);
	int j = 0;
	for(int i = 1; i <= num; i++){			// 优化：从最开始直接判断条件至a，b中的较小值调整到最大公约数
		if (a % i == 0 && b % i == 0){		// 当i是a和b的的公约数时，才放到数组中
			al[j] = i;						// 数组下标加1，指向下一个位置
			j++;
		}
	}
	if (k <= j){				// k 从1 开始计数，j从0开始计数，此处的j比数组中正确的最大下标多了1
		printf("%d", al[k-1]);	// k 和 j的正确对应关系为：第k个值在数组中对应的下标为k-1，
	} else {					// k-1=j即可找到对应的值（此处j的值已经完成了自加操作）
		printf("0");
	}
	return 0;
}
