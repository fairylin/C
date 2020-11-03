#include<stdio.h>
#include<string.h>
int main(void)
{
    int m, n, i, j, p;
    m = 0;
    n = 0;
    j = 0;
    p = 0;
    char x[60];
    gets_s(x);  // 当前编辑器中通过gets_s 获取字符串输入（scanf无法获取到空格，会以为到了空格就是输入结束）
    for (i = 0; i < strlen(x); i++)
    {   
        // 判断是否是字母
        if (x[i] >= 'a' && x[i] <= 'z' || x[i] >= 'A' && x[i] <= 'Z')  // 如果没有判断大写字母，则输入大写字母时会被统计到其他类型字符 n 中；
        {
            m++;
        }
        // 判断当前字符是否为数字
        else if (x[i] >= '0' && x[i] <= '9')
        {
            p++;
        }
        // 判断当前字符是否为空格
        else if (x[i] == ' ')
        {
            j++;
        }
        // 计数 除了字母/数字/空格以外的其他字符数量；
        else
        {
            n++;
        }
            
    }
    printf("%d %d %d %d", m, p, j, n);
    return 0;
}