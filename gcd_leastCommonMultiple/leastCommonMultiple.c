/**最小公倍数**/
/**
为什么1小时有60分钟，而不是100分钟呢？这是历史上的习惯导致。但也并非纯粹的偶然：60是个优秀的数字，它的因子比较多。事实上，它是1至6的每个数字的倍数。即1,2,3,4,5,6都是可以除尽60。
我们希望寻找到能除尽1至n的的每个数字的最小整数。

欧几里德算法又称辗转相除法，用于计算两个正整数a，b的最大公约数
其计算原理依赖于下面的定理：
定理：两个整数的最大公约数等于其中较小的那个数和两数相除余数的最大公约数。最大公约数缩写为gcd。

gcd(a, b) = gcd(b, a mod b)（前提条件是假设a > b 且 r = a mod b, r 不为0）
**/
#include <stdio.h>

int gcd(int a, int b)
{
    // 最大公约数计算，使用欧几里得算法进行计算
	if (a < b) {
		// 控制最小数永远被赋值给b
		int temp = a;
		a = b;
		b = temp;
	}
	if (b == 0){
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int leastCommonMul(int a, int b)
{
	int gcdRes = gcd(a, b);
	int temp = a/gcdRes * b/gcdRes * gcdRes;
	return temp;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("GCD is:%d", gcd(x, y));
	printf("LeastCommonMul is: %d", leastCommonMul(x, y));
}
