#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, i, j;
	scanf("%d", &n);
	printf("%d\n", n);
	for (j = 2; j < n; j++){
		x = 0;
		for (i = 1; i < j; i++){
			if (j % i == 0){
				x = x + i;
			}
		}
		if (x == j) {
			printf("%d\n", j);
		}
	}
}
