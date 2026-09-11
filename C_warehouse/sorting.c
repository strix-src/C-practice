#include <stdio.h>

int main(void)
{
    int a, b, c;
    int t; // 临时交换用变量

    printf("请输入3个整数，空格隔开：");
    scanf("%d %d %d", &a, &b, &c);

    // 目标：让 a >= b >= c
    if (a < b)
    {
        t = a; a = b; b = t;
    }
    if (a < c)
    {
        t = a; a = c; c = t;
    }
    if (b < c)
    {
        t = b; b = c; c = t;
    }

    // 单一出口，最后统一输出
    printf("从大到小：%d %d %d\n", a, b, c);
    return 0;
}

