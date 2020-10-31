#include <stdio.h>
#include <math.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

// 构建函数进行 传入整数的因子求和并判断 因子之和与原来传入的数值是否相同
int divisorSum(int num)
{
	int sum = 1;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			sum = sum + i;
			if (i != num/i) {
				sum = sum + num / i;
			}
		}
	}
	if (sum == num){
		return TRUE;
	} else {
		return FALSE;
	}
}

// 主程序入口，获取传入的数值，判断该数值以内的所有perfect Number
int main(void)
{
	int Num;
	scanf("%d", &Num);
	for (int n = 2; n < Num; n++){
		if (divisorSum(n)){
			printf("%d\n", n);
		}	
	}
}
