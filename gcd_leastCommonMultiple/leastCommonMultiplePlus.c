/**增强版最小公倍数**/
/**
为什么1小时有60分钟，而不是100分钟呢？这是历史上的习惯导致。但也并非纯粹的偶然：60是个优秀的数字，它的因子比较多。事实上，它是1至6的每个数字的倍数。即1,2,3,4,5,6都是可以除尽60。
我们希望寻找到能除尽1至n的的每个数字的最小整数。
**/
#include <stdio.h>
#define MAX 1000

int gcd(int a, int b)
{
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
	long long int gcdRes = gcd(a, b);
	long long int temp = a/gcdRes * b/gcdRes * gcdRes;
	return temp;
}

int main()
{
	int x;
	scanf("%d", &x);
	long long int leaComMulTemp = 0;
	for (int i=1; i<=x; i++){
		if (i == 1){
			leaComMulTemp = 1;
		} else {
			leaComMulTemp = leastCommonMul(leaComMulTemp, i);
		}
	}
	printf("%ld", leaComMulTemp);
}
