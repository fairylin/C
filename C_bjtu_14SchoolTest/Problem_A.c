#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 读入共有的几组数据 */
    int n;
    int x, y;
    int sum[10] = {0};
    scanf("%d", &n);
    int maxX = 0;
    while(n--){
        scanf("%d %d", &x, &y);
        if(x > maxX){
            maxX = x;
        }
        if (sum[x] != 0){
            sum[x] += y;
        } else {
            sum[x] = y;
        }
    }
    int maxSum = 0;
    for(int k = 1; k <= maxX; k++){
        int sumMoney = 0;
        for(int j = 1;j<=maxX;j++){
            if (sum[j] >= k-1 && k >= j){
                sumMoney += (sum[j]-(k-j));
            }
            // printf("%d ", sum[j]);
        }
        if(sumMoney > maxSum){
            maxSum = sumMoney;
        }
    }
    // printf("\n");
    printf("%d", maxSum);
    return 0;
}
