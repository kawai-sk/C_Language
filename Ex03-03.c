#include <stdio.h>

int main(void)
{
    int n,m;
    printf("整数を入力せよ：");
    scanf("%d", &n);
    if (n<0)
        m = -n;
    else
        m = n;
    printf("絶対値は%dです。\n", m);
    return 0;
}