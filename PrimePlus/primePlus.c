/**
编写一个程序，读取整数n，并打印小于等于n的质数的数量。
素数是一个自然数，它正好有两个不同的自然数除数：1和它本身。
例如，前4个质数为：2, 3, 5, 7。

PS: 部分版本编译器中使用的布尔型数组定义需要使用bool类型
**/

#include <stdio.h>

int num;  // 定义输入需要判断的数值num
_Bool priCheck[50000010] = {};  // 定义进行埃拉托斯特尼筛选的素数存放数组

int isPrime(int x)
{
	if (priCheck[x/2] != 0){
		return 0;   // x/2下标不等于0，则为1，说明该位置对应的下标值是合数
	}
	for (int i=3;i <= num / x;i+=2){
		priCheck[i * x / 2] = 1;  // 设置下标值对应的内容是合数，值设置为1
	}
	// if (priCheck[x] != 0){
	// 	return 0;   // 
	// }
	// for (int i=x;i <= num / x;i+=2){
	// 	priCheck[i * x] = 1;
	// }
	return 1;  // 如果x/2为1， 则直接返回x为合数
}

int main()
{
	int count = 0;
	scanf("%d", &num);
	if(num>=2){
		count++;
	}
	for (int i = 3;i<=num;i+=2){
		if(isPrime(i)){
			count++;
		}
	}
 	printf("%d\n", count);
}
