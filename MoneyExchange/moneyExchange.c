#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0;i<=n/3;i++){			// i表示包含了几个3；
		sum += (n - i * 3) / 2 + 1;  	// /2 标识包含了几个2的情况
	}									// +1 表示当仅由1组成时，只有一种情况
	printf("%d\n", sum);				// 最后的sum即为总数
	return 0;
}
