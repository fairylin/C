#include <stdio.h>
#include <math.h>

int main()
{
    float v = 0.0;  // 定义常量，去读取每一个老师的分数
    float sum = 0.0; // 定义float类型常量，统计所有老师的分数之和
    float maxNum = 0.0;  // 定义常量统计最大分数值(初始值赋值为最小值0分)
    float minNum = 100.0;  // 定义常量统计最小分数值(初始值赋值为最大值100分)
    for (int i = 0; i < 7; i++) {
        scanf("%f", &v); // 读取每个老师打的分数
        // printf("%.2f ", v);  // 输出每位老师的打分分数
        if (v > maxNum) {
            maxNum = v;
        }
        if (v < minNum) {
            minNum = v;
        }
        sum += v;  // 统计分数值
    }
    // printf("%.2f %.2f\n", maxNum, minNum);  // 输出统计的最大值和最小值的数值
    sum = sum - maxNum - minNum;
    float res = sum / 5.0;
    printf("%.2f", res);
    return 0;
}
